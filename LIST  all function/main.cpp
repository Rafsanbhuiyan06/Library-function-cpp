/// <list input output>

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
   list<int> l;
   l.push_back(10);
   l.push_back(20); /// push value back
   l.push_back(30);

   list<int>::iterator it;
   for(it = l.begin(); it != l.end(); it++){
    cout<< *it << " "; /// print value using iterator
   }
   cout<<endl;

   l.push_front(8); /// push a value front
   l.push_front(5);

   for(auto i : l) /// print value using auto
        cout<<i<< " ";

    return 0;
}*/

/// <list "front()" and "back()" function>

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10,20,30,40,50};

    cout<< "The first element is "<<l.front()<<endl;
    cout<< "The last element is "<<l.back()<<endl;

}*/

/// <Delet value 1st and last> using "pop_back()" and "pop_front()"

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10,20,30,40,50};

    l.pop_back(); /// Delet last element
    for(auto i : l){
        cout<< i << " ";
    }
    cout<<endl;

    l.pop_front(); /// Delet first element
    for(auto i : l){
        cout<< i << " ";
    }
}*/

/// <value insert> using "insert()"

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    list<int>::iterator it;
    it = l.begin();
    advance(it,3);
}*/

/// <value Delet> using "erase()"

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10,20,30,40,50};
    list<int>::iterator it, it1;
    it = l.begin();
    advance(it,2);

    l.erase(it); /// Delet a single number
    for(auto it : l){
        cout<< it << " ";
    }
}*/


/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10,20,30,40,50};
    list<int>::iterator it, it1;

    it = l.begin();
    it1 = l.begin(); ///Delet maltiple number
    advance(it1,3);

    l.erase(it,it1);
    for(auto it : l){
        cout<<it<< " ";
    }

}*/
/// <Delet number> using "Remove()"

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {2,2,3,4,5,5,6,7,7};
    l.remove(2); ///This function Delet all 2 element
    for(auto i : l)
        cout<<i << " ";
    cout<<endl;

    l.reverse(); /// Reverse The list
    for(auto i : l)
        cout<<i << " ";
}*/

/// <<Delet same value>> using "unique()"

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1,1,1,2,3,4,4,4,5,6,7,7,7};
    l.unique();
    for(auto i : l)
        cout<< i << " "; // answer is {1,2,3,4,5,6,7}
}*/
/// <<Vlaue swaping>> using "swap()"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1,2,3,4,5,6,7};
    list<int> li = {7,6,5,4,3,2,1};

    l.swap(li);
    for(int i : l){
        cout<<i<< " ";
    }
}
