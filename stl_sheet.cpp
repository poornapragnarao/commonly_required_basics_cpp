#include <vector>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
using namespace std;
int main() {

  // VECTOR //
  vector<int> a;
  vector<int> b = { 1,2,3,4,5 };
  vector<int> c(b); // initialize with another vector
  vector<int> d(5, 10); // (size, initval)
  vector<int> e(d.begin(), d.begin() + 3); // initialize with iterators

  // MAP //
  unordered_map<int, int> iimap;
  // insert in map
  iimap[3] = 5;
  iimap[7] = 12;
  iimap[100] = 0;
  // search in maps.
  if (iimap.find(7) != iimap.end()) {
    cout << "Found!" << endl;
    // get val in map once found
    int val = iimap[7];
  }
  else {
    cout << "Not found!" << endl;
  }

  // SET //
  unordered_set<int> iset;
  // insert in set
  iset.insert(25);
  iset.insert(32);
  iset.insert(12);
  // search in sets
  if (iset.find(32) != iset.end()) {
    cout << "Found!" << endl;
  }
  else {
    cout << "Not found!" << endl;
  }

  // STACK //
  stack<int> istack;
  istack.push(55);
  istack.push(65);
  istack.push(75);
  // .top() to access last pushed value in stack.
  cout << istack.top() << endl;
  // .pop() to pop last pushed value in stack.
  // *** .pop() does not return last pushed value to stack. ***
  istack.pop();
  cout << istack.top() << endl;
  istack.pop();
  cout << istack.top() << endl;
  istack.pop();
  cout << istack.size() << endl;

  // ALGOS //
  // sort //
  b = { 3, 2, 1, 4, 5 }; // b = {3,2,1,4,5}
  // *** sort does not return sorted. sorts in place with iterators ***
  sort(b.begin(), b.begin() + 3);// b = {1,2,3,4,5}

  int index = 0;
  return 0;
}
