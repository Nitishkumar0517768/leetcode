// Last updated: 7/16/2026, 9:57:43 PM
1class MyHashSet {
2public:
3    vector<int> m;
4    int size;
5
6    MyHashSet() {
7        size = 1e6+1;
8        m.resize(size);
9    }
10    
11    void add(int key) {
12        m[key] = 1;
13    }
14    
15    void remove(int key) {
16        m[key] = 0;
17    }
18    
19    bool contains(int key) {
20        return m[key];
21    }
22};
23
24/**
25 * Your MyHashSet object will be instantiated and called as such:
26 * MyHashSet* obj = new MyHashSet();
27 * obj->add(key);
28 * obj->remove(key);
29 * bool param_3 = obj->contains(key);
30 */