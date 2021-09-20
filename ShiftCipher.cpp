/*
Nama        : Matthew Felix Ristanto
NPM         : 140810190047
Kelas       : A
Tanggal     : 20 September 2021
Deskripsi   : Shift Cipher Program
*/

#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

string encrypt(string& plainTxt, string& cipherTxt, int& key){
    cin.ignore();
    cout<<"enter plain text to Encrypt : "; getline(cin,plainTxt);
    cout<<"enter key : ";cin>>key;
    for(int i=0;i<plainTxt.size();i++)
        {
            if (plainTxt[i] != ' ')
            {
            cipherTxt = char(int(plainTxt[i]+key-97)%26 +97);
            cout<<cipherTxt;
            }
            else
            {
            cout << ' ';
            }
        }
}

string decrypt(string& plainTxt, string& cipherTxt, int& key){
    cin.ignore();
    cout<<"enter cipher text to Decrypt : "; getline(cin,cipherTxt);
    cout<<"enter key : ";cin>>key;
    for(int i=0;i<cipherTxt.size();i++)
        {
            if (cipherTxt[i] != ' ')
            {
            plainTxt = char((int(cipherTxt[i] - key - 97) % 26 + 26) % 26 + 97);
            cout<<plainTxt;
            }
            else
            {
            cout << ' ';
            }
        }
}

int main(){
    string plainTxt;
    string cipherTxt;
    int key;
    int opt;
    bool istrue=true;
    cout<<"SHIFT CIPHER PROGRAM";
    while (istrue==true)
    {
        cout<<"\n Which function do you wish to use : \n";
        cout<<"1. Encrypt \n2. Decrypt \n3. Exit Program"; cout<<endl;
        cin>>opt;
        switch (opt)
        {
        case 1/*Encryption*/:
            encrypt(plainTxt,cipherTxt,key);
            break;
        case 2/*Decryption*/:
            decrypt(plainTxt,cipherTxt,key);
            break;
        case 3/*Abort Mission*/:
        istrue=false;
        break;
        default:
        cout<<"Wrong Inputt";
            break;
        }
    }
    
}