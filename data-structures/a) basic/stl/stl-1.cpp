#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // they are same
    if (p1.first > p2.first)
        return true;
    return false;
}

void explainExtra()
{
    sort(a, a + n);
    sort(v.begin(), v.end());
    sort(a + 2, a + 4);
    sort(a, a + n, greater<int>);
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending
    sort(a, a + n, comp);
    // {4,1}, {2, 1}, {1, 2}};
    int num = 7;
    int cnt = _builtin_popcount();
    long long num = 165786578687;
    int cnt = _builtin_popcountll();
    string s = "123";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
}

void explainMultimap()
{
    // everything same as map, only it can store multiple keys
    // only mpp [key] cannot be used here
}

void explainUnorderedMap()
{
    // same as set and unordered_Set difference.
}

void map_stl()
{
    map<int, int> mpp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mpp;
    mpp[1] = 2;
    mpp.emplace({3, 1});
    mpp.insert({2, 4});
    mpp[{2, 3}] = 10;
    {
        {
            1, 2
        }
        {
            2, 4
        }
        {
            3, 1
        }
    }
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.find(5);
    // This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
    // erase, swap, size, empty, are same as above
}

void uset_stl()
{
    unordered set<int> st;
    // tower_bound and upper_bound function
    // does not works, rest all functions are same
    // as above, it does not stores in any
    // particular order it has a better complexity
    // than set in most cases, except some when collision happens
}

void multi_set_stl()
{
    // Everything is same as set
    // only stores duplicate elements also
    multiset<int> ms;
    ms.insert(1); // {1, 1} ,}}
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1, 1}
    ms.erase(1) : // all 1's erased
                  int cnt = ms.count(1);
    // only a single one erased
    ms.erase(ms.find(1));
    ms.erase(ms.find(1), ms.find(1) + 2);
    // rest all function same as set
}

void set_stl()
{
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4}
    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency
    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above
    // {1, 2, 3, 4, 5}
    auto it = st.find(3);
    // {1, 2, 3, 4, 5}
    auto it = st.find(6);
    // {1, 4, 5}
    st.erase(5); // erases 5 // takes logarithmic time
    int cnt = st.count(1);
    auto it = st.find(3);
    st erase(it). // it takes constant time.

        auto it1 = st.find(2);
    auto it1 = st.find(4);
    st.erase(it1, it2);

    auto it = st.lower_bound(2);
    auto it = st.lower_bound(3);
}

void pq_list()
{
    priority_queue<int> pq;

    pq.push(5);       // {5}
    pq.push(2);       // {5, 2}
    pq.push(8);       // {8, 5, 2}
    pq.emplace(10);   // {10, 8, 5, 2}
    cout << pq.top(); // prints 10
    pq.pop();         // {8, 5, 2}
    cout << pq.top(); // prints 8
    // size swap empty function same as others
    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);       // {5}
    pq.push(2);       // {2, 5}
    pq.push(8);       // {2, 5, 8}
    pq.emplace(10);   // {2, 5, 8, 10}
    cout << pq.top(); // prints 2
}

void queue_list()
{
    queue<int> q;
    q.push(1);                      // {1}
    q.push(2);                      // {1, 2}
    q.emplace(4);                   // {1, 2, 4}
    q.back() += 5 cout << q.back(); // prints 9
    // Q is {1, 2, 9}
    cout << q.front(); // prints 1
    q.pop();           // {2, 9}
    cout << q.front(); // prints 2
    // size swap empty same as stack
}

void stack_list()
{
    stack<int> st;
    st.push(1);        // {1}
    st.push(2);        // {2, 1}
    st.push(3);        // {3, 2, 1}
    st.push(3);        // {3, 3, 2, 1}
    st.emplace(5);     // {5, 3, 3, 2, 1}
    cout << st.top();  // prints 5 "** st[2] is invalid **"
    st.pop();          // st looks like {3, 3, 2, 1}
    cout << st.top();  // 3
    cout << st.size(); // 4
    cout << st.empty();
    stack<int> st1, st2;
    st1.swap(st2);
}

void dequeue_list()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(4);    // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}
    dq.pop_back();       // {3, 4, 1}
    dq.pop_front();      // {4, 1}
    dq.back();
    dq.front();
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void list_stl()
{
    list<int> ls;
    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}
    ls.push_front(5);   // 5 2, 4};
    ls.emplace_front();
    {2, 4};
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void pair_stl()
{
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 1}};
    cout << arr[1].second;
}

void vector_stl()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> vec1(5, 100); // [100, 100, 100, 100, 100]; predefined with 100 on 5 instances

    vector<int> vec2(5);

    vector<int> vec3(v1);

    // iterator
    vector<int>::iterator it = v.begin();
    it++;

    cout << *(it) << " ";

    it += 2;
    cout << *(it) << " ";

    vector<int>::it = v.end();
    vector<int>::it = v.rend();
    vector<int>::it = v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back();

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it : v)
    {
        cout << it << " ";
    }

    v.erase(v.begin() + 1);
    v.erase(v.begin() + 2, v.begin() + 4);

    vector<int> vec3(2, 100);
    vec3.insert(v.begin(), 300);
    vec3.insert(vec3.begin() + 1, 2, 10);

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());

    cout << v.size();

    v.pop_back();

    v.swap(vec3);

    v.clear();

    cout << v.empty();
}

int main()
{
    return 0;
}