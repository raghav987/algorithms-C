//xor of numbers.
#include<bits/stdc++.h>

using namespace std;
long long getXor (long long,long long);
long long f(long long);

int main(){
            ios_base::sync_with_stdio(false);

    long long a, b;
    long T;
    cin>>T;
    for(long k=0;k<T;k++){

    cin >> a >> b;

    int result =0 ;



        result =getXor(a, b);

    if(result %2== 0){
        cout << "Even" << endl;
    }
    else
    cout << "Odd" << endl;
    }
    return 0;
}
long long f(long long a) {
     long long res[] = {a,1,a+1,0};
     return res[a&3];
}

long long getXor(long long a, long long b) {
     return f(b)^f(a-1);
}
