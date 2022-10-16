#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/


bool is_possible_sol(int pages[], int studs, int mid, int books){
    int stud_count = 1;
    int sum = 0;
    for(int i = 0; i < books; i++){
        if(sum + pages[i] <= mid){
            sum += pages[i];
        }else{
            stud_count++;
            if(stud_count > studs || pages[i] > mid){
                return false;
            }
            sum = pages[i];
        }
    }
    return true;
}


int allocate_book(int pages[], int studs, int books){
    int total_pages_of_all_books = 0;
    for(int i = 0; i < books; i++){
        total_pages_of_all_books += pages[i];
    } 
    int s = 0;
    int e = total_pages_of_all_books;
    int mid, ans = -1;
    while(s < e){
        mid = s + (e-s)/2;
        if(is_possible_sol(pages, studs, mid, books)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
                
    }
    return ans;
}

int main(){
    int pages[4] = {10,20,30,40};
    int students = 2;
    int books = 4;

    int ans = allocate_book(pages, students, books);
    cout << endl << "minimum pages a student can read: " << ans;
}