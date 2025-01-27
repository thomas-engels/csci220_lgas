#include <iostream>
#include <queue>
using namespace std;
void emit_sorted( unsigned S )
{
    queue<int> Q;
    int v;
    while( cin >> v ) {
        /***
        * maintain the queue in ascending order of elements seen so far
        * essentially "insertion sort"
        */
        // wrap elements less than v to the back of the queue
        size_t i;
        for( i=0; i<Q.size() && Q.front()<v; ++i ) {
            Q.push( Q.front() );
            Q.pop();
        }
        // push v to the queue where it belongs in relation to the other
        // values
        Q.push(v);
        ++i;
        // finish wrapping elements >= v to the back of the queue
        for( ; i<Q.size(); ++i ) {
            Q.push( Q.front() );
            Q.pop();
        }
        // if we've seen at least S values, it is safe to emit the smallest
        // of them.
        if( Q.size() >= S ) { // beware! == S doesn't work so well if S=0
            cout << Q.front() << endl;
            Q.pop();
        }
    }
    // don't forget the S-1 elements still in the queue!
    while( !Q.empty() ) {
        cout << Q.front() << endl;
        Q.pop();
    }
}

int main()
{
  int N;

};
