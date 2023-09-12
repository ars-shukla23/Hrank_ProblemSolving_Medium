#include <bits/stdc++.h>
#include<cmath>

using namespace std;


string remove_spaces(string s){
    string new_s="";
    for(int i=0;i<s.size();i++){
        if(s.at(i)!=' '){
            new_s=new_s+(s.at(i));
        }
    }
    return new_s;
}




int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int rows=floor(sqrt(l));
    int columns=ceil(sqrt(l));
   //string new_s=remove_spaces(s); 
   
    while (rows * columns < l) {
        if (columns < rows) {
            columns++;
        } else {
            rows++;
        }
    }

   
   
   
    int count=0;
    char grid[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(count<l){
            grid[i][j]=s.at(count);
            count++;
            }
            else{
                grid[i][j]=' ';
            }
        }
    }
    
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            if(grid[j][i]!=' '){
            cout<<grid[j][i];
            }
        }
         cout<<" ";
    }

    return 0;
}
