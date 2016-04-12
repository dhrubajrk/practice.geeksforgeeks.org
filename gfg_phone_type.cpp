#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<char> vc[9];
void printChar(int arr[],int i,int n,string s)
{
    if(i==n)
        cout<<s<<" ";
    else
    {
        for(int k=0;k<vc[arr[i]].size();++k)
        {
            s+=vc[arr[i]][k];
            printChar(arr,i+1,n,s);
            s.erase(i,1);
        }
    }
}

int main()
{
    vc[2].pb('a');vc[2].pb('b');vc[2].pb('c');
    vc[3].pb('d');vc[3].pb('e');vc[3].pb('f');
    vc[4].pb('g');vc[4].pb('h');vc[4].pb('i');
    vc[5].pb('j');vc[5].pb('k');vc[5].pb('l');
    vc[6].pb('m');vc[6].pb('n');vc[6].pb('o');
    vc[7].pb('p');vc[7].pb('q');vc[7].pb('r');vc[7].pb('s');
    vc[8].pb('t');vc[8].pb('u');vc[8].pb('v');
    vc[9].pb('w');vc[9].pb('x');vc[9].pb('y');vc[9].pb('z');

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i)
            cin>>arr[i];
        string s="";
        printChar(arr,0,n,s);
        cout<<"\n";
    }
return 0;
}

