#include <iostream>
#include <vector>
#include <algorithm>
#if defined(__unix__) || defined(__APPLE__)
#include <sys/resource.h>
#endif

using std::vector;
using std::ios_base;
using std::cin;
using std::cout;

class TreeOrders {
  int n;
  vector <int> key;
  vector <int> left;
  vector <int> right;
  vector<int> result;

public:
  void read() {
    cin >> n;
    key.resize(n);
    left.resize(n);
    right.resize(n);
    for (int i = 0; i < n; i++) {
      cin >> key[i] >> left[i] >> right[i];
    }
  }


  vector <int> in_order() {
    result.clear();
    in_ordert(0);
    // Finish the implementation
    // You may need to add a new recursive method to do that
    return result;
  }

  void in_ordert(int i)
  {

      if(left[i]!=-1)
      {
          in_ordert(left[i]);
      }
        result.push_back(key[i]);

      if(right[i]!=-1)
      {
          in_ordert(right[i]);
      }
   }

  vector <int> pre_order() {
    result.clear();
    pre_ordert(0);
    // Finish the implementation
    // You may need to add a new recursive method to do that
    return result;
  }
  void pre_ordert(int i)
  {
        result.push_back(key[i]);
        if (left[i]!=-1)
        {
            pre_ordert(left[i]);
        }

        if (right[i]!=-1)
        {
            pre_ordert(right[i]);
        }
    }

  vector <int> post_order() {
    // Finish the implementation
    // You may need to add a new recursive method to do that
    result.clear();
    post_ordert(0);
    return result;
  }

  void post_ordert(int i)
  {
        if(left[i]!=-1)
        {
            post_ordert(left[i]);
        }
        if(right[i]!= -1)
        {
            post_ordert(right[i]);
        }
        result.push_back(key[i]);
  }
};

void print(vector <int> a) {
  for (size_t i = 0; i < a.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << a[i];
  }
  cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    TreeOrders t;
    t.read();
    print(t.in_order());
    print(t.pre_order());
    print(t.post_order());
    return 0;
}


