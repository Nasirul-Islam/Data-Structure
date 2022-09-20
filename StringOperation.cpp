// String Operation Using library function
#include<iostream>
#include<cstring> // for library function
#include<string.h> // for library function
using namespace std;

int main()
{
    // Uses library function C style character string ------------
    // Different type string initialization
    char str1[] = {'h','e','l','l','o', ' ', '\0'};
    char str2[7] = {'s','t','r','i','n','g'};
    // find length --------------
    int clen = strlen(str2);
    cout << "length of str2 = " << clen <<endl;
    // string copy ------------
    char copyStr1[10];
    strcpy(copyStr1,str2);
    cout << "copy of str2 = " << copyStr1 <<endl;
    // string concate ------------
    strcat(str1,str2);
    cout << "concate str1 + str2 = " << str1 <<endl;
    // string convert to Uppercase ---------------
    strupr(copyStr1);
    cout << "converted to upper = " << copyStr1 <<endl;
    // string convert to Lowercase
    strlwr(copyStr1);
    cout << "converted to lower = " << copyStr1 <<endl;
    // string comparison
    int result = strcmp(copyStr1, str1);
    if(result==0)
        cout << "comparison is true " <<endl;
    else
        cout << "comparison is false " <<endl;
    // Using string class --------------------------
    // string initialization
    string str3 = "Nasirul";
    string str4 = "Islam";
    // find length ------------------------
    int slen = str4.size();
    cout << "length of str4 = " << slen <<endl;
    // string copy -------------------------
    string copyStr2;
    copyStr2 = str4;
    cout << "copy of str4 = " << copyStr2 <<endl;
    // string concate ----------------------
    string str5 = str3 + " " + str4;
    // str3.append(str4); --------------
    cout << "concate str3 + str4 = " << str5 <<endl;
    // Different type string input ---------------------------
    char cname; //Stores one character
    //Stores many characters but won't take space after that
    char arrName[20];
    string sname;
    // cin >> arrName;
    // Library functions can be used to take multiple word inputs
    cout << "Enter your name: " <<endl;
    // 1. gets(arrName);
    // 2. getline(cin,sname);
    // 3. cin.getline(arrName,20);
    cout << "Welcome " << arrName <<endl;

    return 0;
}
