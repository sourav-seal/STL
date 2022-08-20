//longest word in a sentecne
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[5000],b[5000],c[5000];
    int i=0,k=0,currlen=0,maxlength=INT_MIN;
    cout<<"Enter a sentence";
    cin.getline(a,5000);
    //cin.ignore();
    while(1)
    {
        if(a[i]==' ' || a[i]=='\0')
        {
            if(currlen>maxlength)
            {
                maxlength=currlen;
                c[i]='\0';
                b[0]='\0';
                strncpy(b,c,sizeof(c));
                b[sizeof(b)-1]='\0';
                c[0]='\0';
                k=0;
            }       
            currlen=0;  
        }
        else
        {
            currlen++;
            c[k++]=a[i];
        }
        if(a[i]=='\0')
        {
            break;
        }
        i++;
    }
    cout<<"Output : "<<b<<",size :"<< maxlength;


    

}