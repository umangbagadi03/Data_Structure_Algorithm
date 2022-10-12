// sorting stack 

// pahle apn top wala elemnt hai usse hatane hai side me phir jo baki hai unpe sorted insert apply krna aur badme ye top wala wapis dal dena

// sortedinsert me apn upar k elemnt jab tak bahar rakhte jate jab tak apneko unse chote elemnt andar nhi mil jata agar mil gaya toh isse add karde aur issase sab elemnt sort ho jata

#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &stack, int num) {
    // base case
    if(stack.empty() || (!stack.empty() && stack.top() < num)) {  // agr stack empty hhai ya jo number bahar hai vo stack k top wale se bada hai tab jo bahar wala num hai vo direct anadr aa jayega
        stack.push(num);   // aise condition me direct add kar denge apn stack me push
        return;
    }

    int n = stack.top();  // nhi toh wahi phir next wala top bahar hoga phir checjk hoga k chota hai kya next tiop se agr hoga toh phir se add hoga ye condition chlte rhege
    stack.pop();

    // recursive call
    sortedInsert(stack , num);   // wahi top ko bahar nikalte jao aur check krte jaop k jo uske bad ka element hai usses toh ye chota nhi hai agr ha toh phir se add nhi toh recurssion chlta rhegas next par jayega 
    stack.push(n);
}


void sortStack(stack<int> &stack)
{
    // base class
    if(stack.empty()) {   // bhai check kar rhe in case agr stack empty hai toh bat hi khtm return kar denge yahi pe
        return ;
    }

    int num = stack.top();   // first of all apn top k nikal lenege aur jo baki hai unke soirted insert lag dennge matlab upar k jab tak hatate jayenge jab tak koi unse chota nhi mil jata phir add kardenge
    stack.pop();


    // recursive call
    sortStack(stack);  // sort stack hoga yaha pe

    sortedInsert(stack, num);   // ye function upar bnaya hai
}