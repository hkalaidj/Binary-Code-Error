#include <iostream>
#include<deque>
#include <queue>
using namespace std;

int main()
{         int count=0;
    int x;
    cout<<"FIRST DIGIT OF BINARY NUMBER IS FOR PARITY ***** 0 IS EVEN AND 1 IS CONSIDERED ODD"<<endl;
    cout << "INPUT A SINGLE UNSIGNED DECIMAL VALUE BETWEEN 0 AND 255: ";

    cin>>x;

    if (x>0 && x <256){

    deque <int> s;
deque<int>::iterator it;


s.push_back(x);

   // cout<<x<<" ";
    do{
        if(x%2==0){
            x=x/2;
s.push_back(x);

        }
         else {

        x = (x-1)/2;
s.push_back(x);
count++;

    }


    }while(x!=1);
int z=8-s.size();
     cout<<"COUNT OF  1 BIT'S = "<<count+1<<endl;
   if((count+1)%2==0 && z>0){
    cout<<"PARITY IS EVEN "<<endl;
     cout<<"NO PARITY ERROR "<<endl;
   }

     if((count+1)%2==0 && z==0){
        cout<<"PARITY IS EVEN"<<endl;
        cout<<"THERE IS PARITY ERROR"<<endl;
    }

     if((count+1)%2==1 && z>0){
            cout<<"PARITY IS NOT EVEN"<<endl;
    cout<<"THERE IS PARITY ERROR"<<endl;

     }

 else{
    cout<<""<<endl;
 }

   cout<<"YOUR VALUE 8 BIT IN BINARY FOR THE INPUT IS= ";




   char c='0';
   cout<<string(z,c);
for (int i =s.size()-1;i>=0;i--)

               cout<<s[i]%2;

cout<<""<<endl;
}

    else{
            cout<<""<<endl;
        cout<<"YOU HAVE ENTERED A VALUE BEYOND THE RANGE"<<endl;
    }
    return 0;
}
