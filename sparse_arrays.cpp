#include <bits/stdc++.h>

using namespace std;


vector<int> num_of_matches(vector<string> s,vector<string> q){
    vector<int> sums;
    
    for(int i=0;i<q.size();i++){
        int sum=0;
        for(int j=0;j<s.size();j++){
            if(q.at(i)==s.at(j)){
                sum++;
            }
        }
        sums.push_back(sum);
    }
    return sums;
}

int main()
{
  vector<string> string_list;
  vector<string> query_list;
  
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      string val;
      cin>>val;
      string_list.push_back(val);
    }  
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
      string val;
      cin>>val;
      query_list.push_back(val);
    }  
    
    vector<int> result=num_of_matches(string_list,query_list);
    vector<int>::iterator it;
    for(it=result.begin();it!=result.end();it++){
        cout<<*it<<endl;   
    }
    
   return 0;
}