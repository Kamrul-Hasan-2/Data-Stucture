#include <bits/stdc++.h>
using namespace std;

int expressionPostfix(string  text){
    stack<int> st;
    for(int i = 0; i<text.size();i++){
        char ch = text[i];
        if(ch <= '9' && ch >= '0'){
            st.push(ch - '0');
        }
        else{
            if(ch == '+'){
                int v1 = st.top();
                st.pop();
                int v2 = st.top();
                st.pop();
                int res = v1+v2;
                st.push(res);
            }
            if(ch == '*'){
                int v3 = st.top();
                st.pop();
                int v4 = st.top();
                st.pop();
                int res1 = v3*v4;
                st.push(res1);
            }
            if(ch == '-'){
                int v5 = st.top();
                st.pop();
                int v6 = st.top();
                st.pop();
                int res2 = v6-v5;
                st.push(res2);
            }
             if(ch == '/'){
                int v7 = st.top();
                st.pop();
                int v8 = st.top();
                st.pop();
                int res3 = v7/v8;
                st.push(res3);
            }
        }
    }
    return st.top();

}

int main(){
    string text;
    cin >> text;
    cout << expressionPostfix(text);

}