//diving_judging.cpp: Your goal is to create a program that will determine the raw score for a dive.  In a diving competition, there are 5 judges who each award a dive scores between 0 and 10.  The lowest and highest scores are thrown out, and the diver’s raw score is the sum of the three middle scores.   
//Name: Luke MacLean
//Class Section: COSC-1436.900 Online
// Date: 11/07/2021

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
    // An array to hold the judging scores. 
    double judgingScores[5];

    cout << "Welcome to the Dive Judging Calculator! \n";
    cout << "Please enter the five judging scores for the dive: \n";

    // Have the program prompt the user to enter five judge’s scores for the dive, and store those 5 values in the array. 
    for (int i = 0; i < 5; i++){
        cout << "Dive " << i + 1 << ": ";
        cin >> judgingScores[i];
    }

    // Determine the highest and lowest scores in the array.  
    double lowestScore = judgingScores[0];
    for (int k = 0; k < 5; k++){
        if(lowestScore > judgingScores[k]){
            lowestScore = judgingScores[k];
        };
    } 

    // Determine the highest and lowest scores in the array.  
    double highestScore = judgingScores[0];
    for (int l = 0; l < 5; l++){
        if(highestScore < judgingScores[l]){
            highestScore = judgingScores[l];
        };
    } 

    // Correctly determine the raw score of the dive
    double rawScore = 0;
    for (int m = 0; m < 5; m++){
        if(judgingScores[m] != lowestScore && judgingScores[m] != highestScore ){
            rawScore += judgingScores[m];
        };
    } 

    // Display a message to the user that shows the 5 scores entered, the two scores that were dropped, and the final raw score of the dive. 
    cout << "The results are in!  Here were the 5 judges scores: "; 
    for (int n = 0; n < 5; n++){
        cout << judgingScores[n] << " ";
    } 
    cout << "\nThe highest score of " << highestScore << " and the lowest score of " << lowestScore << " were dropped. \n";

    cout << "The raw score for this dive is: " << rawScore;

    return 0;
}