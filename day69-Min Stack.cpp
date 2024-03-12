// Problem - https://www.interviewbit.com/problems/min-stack/
--------------------------------------------------------------
//Solution: 1
vector<pair<int, int>> s;
MinStack::MinStack() {
    s.clear();
}

void MinStack::push(int x) {
    if(!s.size()) {
        s.push_back(make_pair(x, x));
    } else {
        int minEle = min(x, s.back().second);
        s.push_back(make_pair(x, minEle));
    }
}

void MinStack::pop() {
    if(s.size()) s.pop_back();
}

int MinStack::top() {
    if(!s.size()) return -1;
    return s.back().first;
}

int MinStack::getMin() {
    if(!s.size()) return -1;
    return s.back().second;
}


// Solution: 2
/* vector<int> s;
int minEle;

MinStack::MinStack() {
    s.clear();
}

void MinStack::push(int x) {
    if(!s.size()) {
        s.push_back(x);
        minEle = x;
    }
    else {
        if(minEle > x) {
            s.push_back((2 * x) - minEle);
            minEle = x;
        }
        else {
            s.push_back(x);
        }
    }  
}

void MinStack::pop() {
    if(s.size()) {
        if(s.back() < minEle) {
            minEle = (2 * minEle) - s.back();
            s.pop_back();
        }
        else {
            s.pop_back();
        }
    } 
}

int MinStack::top() {
    if(!s.size()) return -1;
    else {
        if(s.back() < minEle) {
            return minEle;
        } else {
            return s.back();
        }
    } 
}

int MinStack::getMin() {
    if(!s.size()) return -1;
    return minEle;    
} */
