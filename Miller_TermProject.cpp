//Program Name: Clue! Term project
//Purpose: create playable online game of clue
//Author: Sholly Miller
//Date Last Modified: 12-09-19

//Included for random # generation:
#include <cstdlib>
#include <ctime> 
 
#include <iostream>
using namespace std;
 
//Constants for randomization within range 1-5 for weapons,
//6-10 for locations, and 11-15 for suspect
const int MINW = 1;
const int MAXW = 5;
const int MINL = 6;
const int MAXL = 10;
const int MINS = 11;
const int MAXS = 15;
 
//Constants initializing values of each item in the weapons list for randomization
const int FORK = 1;
const int DIFFUSER = 2;
const int PUSHPINS = 3;
const int STAPLER = 4;
const int PILLOW = 5;
 
//Constants initializing values of each item in the locations list for randomization
const int ELEVATOR = 6;
const int LOUNGE = 7;
const int TENZEROSIX = 8;
const int MAXROOM = 9;
const int STAIRWELL = 10;
 
//Constants initializing values of each item in the suspects list for randomization
const int SHOLLY = 11;
const int AMBER = 12;
const int RAMAX = 13;
const int JOSEPH = 14;
const int GREG = 15;
 
int main(){
    //Introduces game and prompts user to start:
    cout << "Welcome to Clue!: Floor 10 Edition. In this game you will collect\n" <<
    "clues in order to solve: what weapon was used, where the crime was committed,\n" << 
    "and who committed the crime. Best of Luck!" << endl;
    cout << "PRESS ENTER TO START" << endl;
    cin.get();
 
    //Describe the murder:
    cout << "An unidentifed victim was found face down in the 10th floor hallway.\n" <<
    "Authorities are currently trying to solve the case, but only with your help will\n" <<
    "they be able to find the killer." << endl;
    cout << "Below is a list of potential weapons, locations, and suspects: " << endl;
 
    //Provide initial list of weapons, locations, and suspects:
    cout << "Weapons: \n" <<
            "1.  Fork\n" <<
            "2.  Diffuser\n" <<
            "3.  Push pins\n" <<
            "4.  Stapler\n" <<
            "5.  Pillow" << endl;
    cout << "Locations: \n" <<
            "6.  Elevator\n" <<
            "7.  Lounge\n" <<
            "8.  1006\n" <<
            "9.  RA Max's room\n" <<
            "10. Stairwell" << endl;
    cout << "Suspects: \n" <<
            "11. Sholly\n" <<
            "12. Amber\n" <<
            "13. RA Max\n" <<
            "14. Joseph\n" <<
            "15. Greg the Lobster" << endl;
    
    //Variables to store randomly generated computer choice for
    //weapon, location, and suspect:
    int weapon;
    int location;
    int suspect;
 
    //Variables used to relate computer generated number to actual 
    //weapon, location, and suspect:
    int weaponUsed;
    int locationCommitted;
    int suspectMurderer;
 
    //Truly randomize numbers:
    unsigned seed = time(0);
    srand(seed);
 
    //Randomize weapon used:
    weapon = (rand() % (MAXW - MINW) + 1) + MINW;
        if (weapon == 1){
            weaponUsed = FORK;
        } else if (weapon == 2){
            weaponUsed = DIFFUSER;
        } else if (weapon == 3){
            weaponUsed = PUSHPINS;
        } else if (weapon == 4){
            weaponUsed = STAPLER;
        } else {
            weaponUsed = PILLOW;
        }
 
    //Randomize location:
    location = (rand() % (MAXL - MINL) + 1) + MINL;
        if (location == 6){
            locationCommitted = ELEVATOR;
        } else if (location == 7){
            locationCommitted = LOUNGE;
        } else if (location == 8){
            locationCommitted = TENZEROSIX;
        } else if (location == 9){
            locationCommitted = MAXROOM;
        } else {
            locationCommitted = STAIRWELL;
        }
 
    //Randomize suspect:
    suspect = (rand() % (MAXS - MINS) + 1) + MINS;
        if (suspect == 11){
            suspectMurderer = SHOLLY;
        } else if (suspect == 12){
            suspectMurderer = AMBER;
        } else if (suspect == 13){
            suspectMurderer = RAMAX;
        } else if (suspect == 14){
            suspectMurderer = JOSEPH;
        } else {
            suspectMurderer = GREG;
        }
    
//Variable storing user choice for which location to enter:
int locationEntered;
 
 //Five different (but very similar) output prompts asking user to enter a location
 //that provides them with different clues based on which weapon was used in the crime:

    //Prompt user to choose room to enter:
    cout << endl;
    cout << "Which location would you like to enter to receive your first clue?\n" <<
    "Make selection using the corresponding number (6-10) from the menu below.\n";
    //Output menu of locations for choice:
    cout << "Locations: \n" <<
            "6.  Elevator\n" <<
            "7.  Lounge\n" <<
            "8.  1006\n" <<
            "9.  RA Max's room\n" <<
            "10. Stairwell" << endl;
    cin >> locationEntered;
    
    //Creates different storylines for each weapon:
    if (locationEntered == 6){
        cout << "Welcome to the elevator. You look down and see used staples lining the\n" <<
        "floor. Weird, right? It's impossible to staple something to an elevator wall...\n";
        if (weaponUsed == STAPLER){
            cout << "Seems important to note that the stapler probably wasn't being used\n" <<
            "the way it was intended. Very fishy!\n";
        } else {
            cout << "Weird, but can probably be overlooked...\n";
        }
    } else if (locationEntered == 7){
        cout << "Welcome to the lounge. You sit down on the couch and feel something cold.\n" <<
        "Shoved suspiciously in between the cushions is a fork, and it looks pretty dirty..\n";
        if (weaponUsed == FORK){
            cout << "Now that you think about it, the goop on the fork looks a lot like blood.\n";
        } else {
            cout << "Hmm... could that stuff be blood? You smell it nervously and determine\n" <<
            "that it's almost certainly just ketchup.\n";
        }
    } else if (locationEntered == 8){
        cout << "Welcome to room 1006, Sholly and Amber's dorm.\n" <<
        "You walk inside and look for anything suspicious. You suddenly stumble upon\n" <<
        "a very firm, circular pillow not much larger than a human head.\n";
        if (weaponUsed == PILLOW){
            cout << "Getting trapped under that pillow seems super dangerous. Very\n" <<
            "likely you could be looking at the murder weapon.\n";
        } else {
            cout << "You're reading too much into things... A teenage girl's pillow\n" <<
            "from Target is not the murder weapon... most likely.\n";
        }
    } else if (locationEntered == 9){
        cout << "Welcome to Max's room. As an RA, Max gets pretty stressed out\n" <<
        "taking care of all his residents. To keep calm he uses a diffuser with\n" <<
        "essential oils. One of the bottles is unlabeled.\n";
        if (weaponUsed == DIFFUSER){
            cout << "Why is only one of the bottles unlabeled? Maybe this is\n" <<
            "jumping to conclusions, but every movie you've ever seen should be\n" <<
            "telling you that the lack of label means it's poison.\n";
        } else {
            cout << "Labels fall off. Probably something you can overlook.\n";
        }
    } else if (locationEntered == 10){
        cout << "Welcome to the stairwell. In general stairwells are pretty sus...\n" <<
        "this one in particular has a weird pattern of push pins stuck in the wall\n" <<
        "with not a single one actually holding up a piece of paper.\n";
        if (weaponUsed == PUSHPINS){
            cout << "Push pins are really sharp... and there presence seems noteworthy\n" <<
            "since there are so many without anything needing to be hung.\n";
        } else {
            cout << "So what though... doesn't seem relevant in the investigation.\n";
        }
    } else {
        cout << "Invalid menu selection. Choose a location with a corresponding\n" <<
        "number 6-10.\n";
    }
    
    //Prompt user to choose second room to enter:
    cout << endl;
    cout << "Which location would you like to enter to receive your second clue?\n" <<
    "Make selection using the corresponding number (6-10) from the menu below.\n" << 
    "*note each location only has one clue.\n";
    //Output menu of locations for choice:
    cout << "Locations: \n" <<
            "6.  Elevator\n" <<
            "7.  Lounge\n" <<
            "8.  1006\n" <<
            "9.  RA Max's room\n" <<
            "10. Stairwell" << endl;
    cin >> locationEntered;
    
    //Creates different storylines for each weapon:
    if (locationEntered == 6){
        cout << "Welcome to the elevator. You look down and see used staples lining the\n" <<
        "floor. Weird, right? It's impossible to staple something to an elevator wall...\n";
        if (weaponUsed == STAPLER){
            cout << "Seems important to note that the stapler probably wasn't being used\n" <<
            "the way it was intended. Very fishy!\n";
        } else {
            cout << "Weird, but can probably be overlooked...\n";
        }
    } else if (locationEntered == 7){
        cout << "Welcome to the lounge. You sit down on the couch and feel something cold.\n" <<
        "Shoved suspiciously in between the cushions is a fork, and it looks pretty dirty..\n";
        if (weaponUsed == FORK){
            cout << "Now that you think about it, the goop on the fork looks a lot like blood.\n";
        } else {
            cout << "Hmm... could that stuff be blood? You smell it nervously and determine\n" <<
            "that it's almost certainly just ketchup.\n";
        }
    } else if (locationEntered == 8){
        cout << "Welcome to room 1006, Sholly and Amber's dorm.\n" <<
        "You walk inside and look for anything suspicious. You suddenly stumble upon\n" <<
        "a very firm, circular pillow not much larger than a human head.\n";
        if (weaponUsed == PILLOW){
            cout << "Getting trapped under that pillow seems super dangerous. Very\n" <<
            "likely you could be looking at the murder weapon.\n";
        } else {
            cout << "You're reading too much into things... A teenage girl's pillow\n" <<
            "from Target is not the murder weapon... most likely.\n";
        }
    } else if (locationEntered == 9){
        cout << "Welcome to Max's room. As an RA, Max gets pretty stressed out\n" <<
        "taking care of all his residents. To keep calm he uses a diffuser with\n" <<
        "essential oils. One of the bottles is unlabeled.\n";
        if (weaponUsed == DIFFUSER){
            cout << "Why is only one of the bottles unlabeled? Maybe this is\n" <<
            "jumping to conclusions, but every movie you've ever seen should be\n" <<
            "telling you that the lack of label means it's poison.\n";
        } else {
            cout << "Labels fall off. Probably something you can overlook.\n";
        }
    } else if (locationEntered == 10){
        cout << "Welcome to the stairwell. In general stairwells are pretty sus...\n" <<
        "this one in particular has a weird pattern of push pins stuck in the wall\n" <<
        "with not a single one actually holding up a piece of paper.\n";
        if (weaponUsed == PUSHPINS){
            cout << "Push pins are really sharp... and there presence seems noteworthy\n" <<
            "since there are so many without anything needing to be hung.\n";
        } else {
            cout << "So what though... doesn't seem relevant in the investigation.\n";
        }
    } else {
        cout << "Invalid menu selection. Choose a location with a corresponding\n" <<
        "number 6-10.\n";
    }

    //Prompt user to choose third room to enter:
    cout << endl;
    cout << "Which location would you like to enter to receive your third clue?/\n" <<
    "Make selection using the corresponding number (6-10) from the menu below.\n" << 
    "*note each location only has one clue.\n";
    //Output menu of locations for choice:
    cout << "Locations: \n" <<
            "6.  Elevator\n" <<
            "7.  Lounge\n" <<
            "8.  1006\n" <<
            "9.  RA Max's room\n" <<
            "10. Stairwell" << endl;
    cin >> locationEntered;
    
    //Creates different storylines for each weapon:
    if (locationEntered == 6){
        cout << "Welcome to the elevator. You look down and see used staples lining the\n" <<
        "floor. Weird, right? It's impossible to staple something to an elevator wall...\n";
        if (weaponUsed == STAPLER){
            cout << "Seems important to note that the stapler probably wasn't being used\n" <<
            "the way it was intended. Very fishy!\n";
        } else {
            cout << "Weird, but can probably be overlooked...\n";
        }
    } else if (locationEntered == 7){
        cout << "Welcome to the lounge. You sit down on the couch and feel something cold.\n" <<
        "Shoved suspiciously in between the cushions is a fork, and it looks pretty dirty..\n";
        if (weaponUsed == FORK){
            cout << "Now that you think about it, the goop on the fork looks a lot like blood.\n";
        } else {
            cout << "Hmm... could that stuff be blood? You smell it nervously and determine\n" <<
            "that it's almost certainly just ketchup.\n";
        }
    } else if (locationEntered == 8){
        cout << "Welcome to room 1006, Sholly and Amber's dorm.\n" <<
        "You walk inside and look for anything suspicious. You suddenly stumble upon\n" <<
        "a very firm, circular pillow not much larger than a human head.\n";
        if (weaponUsed == PILLOW){
            cout << "Getting trapped under that pillow seems super dangerous. Very\n" <<
            "likely you could be looking at the murder weapon.\n";
        } else {
            cout << "You're reading too much into things... A teenage girl's pillow\n" <<
            "from Target is not the murder weapon... most likely.\n";
        }
    } else if (locationEntered == 9){
        cout << "Welcome to Max's room. As an RA, Max gets pretty stressed out\n" <<
        "taking care of all his residents. To keep calm he uses a diffuser with\n" <<
        "essential oils. One of the bottles is unlabeled.\n";
        if (weaponUsed == DIFFUSER){
            cout << "Why is only one of the bottles unlabeled? Maybe this is\n" <<
            "jumping to conclusions, but every movie you've ever seen should be\n" <<
            "telling you that the lack of label means it's poison.\n";
        } else {
            cout << "Labels fall off. Probably something you can overlook.\n";
        }
    } else if (locationEntered == 10){
        cout << "Welcome to the stairwell. In general stairwells are pretty sus...\n" <<
        "this one in particular has a weird pattern of push pins stuck in the wall\n" <<
        "with not a single one actually holding up a piece of paper.\n";
        if (weaponUsed == PUSHPINS){
            cout << "Push pins are really sharp... and there presence seems noteworthy\n" <<
            "since there are so many without anything needing to be hung.\n";
        } else {
            cout << "So what though... doesn't seem relevant in the investigation.\n";
        }
    } else {
        cout << "Invalid menu selection. Choose a location with a corresponding\n" <<
        "number 6-10.\n";
    }
    
    //Prompt user to choose fourth room to enter:
    cout << endl;
    cout << "Which location would you like to enter to receive your fourth clue?\n" <<
    "Make selection using the corresponding number (6-10) from the menu below.\n" << 
    "*note each location only has one clue.\n";
    //Output menu of locations for choice:
    cout << "Locations: \n" <<
            "6.  Elevator\n" <<
            "7.  Lounge\n" <<
            "8.  1006\n" <<
            "9.  RA Max's room\n" <<
            "10. Stairwell" << endl;
    cin >> locationEntered;
    
    //Creates different storylines for each weapon:
    if (locationEntered == 6){
        cout << "Welcome to the elevator. You look down and see used staples lining the\n" <<
        "floor. Weird, right? It's impossible to staple something to an elevator wall...\n";
        if (weaponUsed == STAPLER){
            cout << "Seems important to note that the stapler probably wasn't being used\n" <<
            "the way it was intended. Very fishy!\n";
        } else {
            cout << "Weird, but can probably be overlooked...\n";
        }
    } else if (locationEntered == 7){
        cout << "Welcome to the lounge. You sit down on the couch and feel something cold.\n" <<
        "Shoved suspiciously in between the cushions is a fork, and it looks pretty dirty..\n";
        if (weaponUsed == FORK){
            cout << "Now that you think about it, the goop on the fork looks a lot like blood.\n";
        } else {
            cout << "Hmm... could that stuff be blood? You smell it nervously and determine\n" <<
            "that it's almost certainly just ketchup.\n";
        }
    } else if (locationEntered == 8){
        cout << "Welcome to room 1006, Sholly and Amber's dorm.\n" <<
        "You walk inside and look for anything suspicious. You suddenly stumble upon\n" <<
        "a very firm, circular pillow not much larger than a human head.\n";
        if (weaponUsed == PILLOW){
            cout << "Getting trapped under that pillow seems super dangerous. Very\n" <<
            "likely you could be looking at the murder weapon.\n";
        } else {
            cout << "You're reading too much into things... A teenage girl's pillow\n" <<
            "from Target is not the murder weapon... most likely.\n";
        }
    } else if (locationEntered == 9){
        cout << "Welcome to Max's room. As an RA, Max gets pretty stressed out\n" <<
        "taking care of all his residents. To keep calm he uses a diffuser with\n" <<
        "essential oils. One of the bottles is unlabeled.\n";
        if (weaponUsed == DIFFUSER){
            cout << "Why is only one of the bottles unlabeled? Maybe this is\n" <<
            "jumping to conclusions, but every movie you've ever seen should be\n" <<
            "telling you that the lack of label means it's poison.\n";
        } else {
            cout << "Labels fall off. Probably something you can overlook.\n";
        }
    } else if (locationEntered == 10){
        cout << "Welcome to the stairwell. In general stairwells are pretty sus...\n" <<
        "this one in particular has a weird pattern of push pins stuck in the wall\n" <<
        "with not a single one actually holding up a piece of paper.\n";
        if (weaponUsed == PUSHPINS){
            cout << "Push pins are really sharp... and there presence seems noteworthy\n" <<
            "since there are so many without anything needing to be hung.\n";
        } else {
            cout << "So what though... doesn't seem relevant in the investigation.\n";
        }
    } else {
        cout << "Invalid menu selection. Choose a location with a corresponding\n" <<
        "number 6-10.\n";
    }
    
    //Prompt user to choose last room to enter:
    cout << endl;
    cout << "Which location would you like to enter to receive your last weapon's clue?\n" <<
    "Make selection using the corresponding number (6-10) from the menu below.\n" << 
    "*note each location only has one clue.\n";
    //Output menu of locations for choice:
    cout << "Locations: \n" <<
            "6.  Elevator\n" <<
            "7.  Lounge\n" <<
            "8.  1006\n" <<
            "9.  RA Max's room\n" <<
            "10. Stairwell" << endl;
    cin >> locationEntered;
    
    //Creates different storylines for each weapon:
    if (locationEntered == 6){
        cout << "Welcome to the elevator. You look down and see used staples lining the\n" <<
        "floor. Weird, right? It's impossible to staple something to an elevator wall...\n";
        if (weaponUsed == STAPLER){
            cout << "Seems important to note that the stapler probably wasn't being used\n" <<
            "the way it was intended. Very fishy!\n";
        } else {
            cout << "Weird, but can probably be overlooked...\n";
        }
    } else if (locationEntered == 7){
        cout << "Welcome to the lounge. You sit down on the couch and feel something cold.\n" <<
        "Shoved suspiciously in between the cushions is a fork, and it looks pretty dirty..\n";
        if (weaponUsed == FORK){
            cout << "Now that you think about it, the goop on the fork looks a lot like blood.\n";
        } else {
            cout << "Hmm... could that stuff be blood? You smell it nervously and determine\n" <<
            "that it's almost certainly just ketchup.\n";
        }
    } else if (locationEntered == 8){
        cout << "Welcome to room 1006, Sholly and Amber's dorm.\n" <<
        "You walk inside and look for anything suspicious. You suddenly stumble upon\n" <<
        "a very firm, circular pillow not much larger than a human head.\n";
        if (weaponUsed == PILLOW){
            cout << "Getting trapped under that pillow seems super dangerous. Very\n" <<
            "likely you could be looking at the murder weapon.\n";
        } else {
            cout << "You're reading too much into things... A teenage girl's pillow\n" <<
            "from Target is not the murder weapon... most likely.\n";
        }
    } else if (locationEntered == 9){
        cout << "Welcome to Max's room. As an RA, Max gets pretty stressed out\n" <<
        "taking care of all his residents. To keep calm he uses a diffuser with\n" <<
        "essential oils. One of the bottles is unlabeled.\n";
        if (weaponUsed == DIFFUSER){
            cout << "Why is only one of the bottles unlabeled? Maybe this is\n" <<
            "jumping to conclusions, but every movie you've ever seen should be\n" <<
            "telling you that the lack of label means it's poison.\n";
        } else {
            cout << "Labels fall off. Probably something you can overlook.\n";
        }
    } else if (locationEntered == 10){
        cout << "Welcome to the stairwell. In general stairwells are pretty sus...\n" <<
        "this one in particular has a weird pattern of push pins stuck in the wall\n" <<
        "with not a single one actually holding up a piece of paper.\n";
        if (weaponUsed == PUSHPINS){
            cout << "Push pins are really sharp... and there presence seems noteworthy\n" <<
            "since there are so many without anything needing to be hung.\n";
        } else {
            cout << "So what though... doesn't seem relevant in the investigation.\n";
        }
    } else {
        cout << "Invalid menu selection. Choose a location with a corresponding\n" <<
        "number 6-10.\n";
    }

//Five different (but very similar) output prompts asking user to select a suspect
//to question. User can choose between two different questions to ask:

//Variable storing user choice for which suspect to question:
int suspectQuestioned;

    //Prompt user to choose first suspect to question:
    cout << endl;
    cout << "Next you can choose which suspect to question.\n" <<
    "Decide who you'd like to talk to by selecting the suspect's\n" <<
    "corresponding number (11-15) from the menu below.\n";
    //Output menu of suspects for choice:
    cout << "Suspects: \n" <<
            "11. Sholly\n" <<
            "12. Amber\n" <<
            "13. RA Max\n" <<
            "14. Joseph\n" <<
            "15. Greg the Lobster" << endl;
    cin >> suspectQuestioned;

    //Variable created to store user choice for which question to ask:
    char questionChosen;

    //Creates different alibis for each suspect chosen:
    if (suspectQuestioned == 11){
        cout << "You chose to question Sholly.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was getting dinner off campus.\n";
            if (suspectMurderer == SHOLLY){
                cout << "Those details seem vague... I wouldn't be convinced.\n";
            } else {
                cout << "Not a super detailed alibi, but I'm sure she's\n" <<
                "telling the truth\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was on a date with my boyfriend!\n" <<
            "Who I'm with during my personal time is none of your business...\n";
            if (suspectMurderer == SHOLLY){
                cout << "That was pretty snippy...\n" <<
                "She seems highly on edge for someone who is trying to prove\n" <<
                "her innocence.\n"; 
            } else {
                cout << "Her and her boyfriend are allllwwayyyys together\n" <<
                "so that seems like a major possibility.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 12){
        cout << "You chose to question Amber.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was in the OR... wish I wasn't though!\n" <<
            "I got tacos in there, but they did NOT hit different.\n";
            if (suspectMurderer == AMBER){
                cout << "I'm almost certain there weren't tacos last night...\n";
            } else {
                cout << "She's so right! I totally believe her...\n" <<
                "Why make your alibi so easily checkable if it wasn't true?\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was talking to the librarian about a book I need for finals.\n" <<
            "I don't have time to commit a crime with the end of the semester\n" << 
            "right around the corner...\n";
            if (suspectMurderer == AMBER){
                cout << "I heard the librarian went home sick yesterday...\n" <<
                "really seems like she's lying\n"; 
            } else {
                cout << "She's a nerd. It checks out.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 13){
        cout << "You chose to question Max.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was at an RHA meeting. My last of the semester, thank God!\n";
            if (suspectMurderer == RAMAX){
                cout << "I'm pretty sure RHA meetings happen on a different night.\n";
            } else {
                cout << "Max is such a great RA, I truly believe he could do no wrong.\n" <<
                "I feel very certain that he is not our killer.\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was with a resident who was in need of some help.\n" <<
            "I was the RA on duty last night so I was pretty swamped with calls.\n";
            if (suspectMurderer == RAMAX){
                cout << "I know for a face Max was not the RA on duty last night...\n" 
                "so what was he really doing?? Very suspicious.\n"; 
            } else {
                cout << "Max takes his job so seriously. He would not lie\n" <<
                "about helping a resident. Someone else committed this crime.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 14){
        cout << "You chose to question Joseph.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I went back to my house in Cutoff. I don't have any written\n" <<
            "exams this week so I booked it on out of my dorm.\n";
            if (suspectMurderer == JOSEPH){
                cout << "I definitely saw his car in the Freret Street Parking\n" <<
                "garage. No way he went home without his car...\n";
            } else {
                cout << "I asked Joseph to hang out yesterday and he told me he\n" <<
                "went home before he even had reason to give an alibi.\n" <<
                "He's almost certainly telling the truth.\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I wasn't with anyone.\n";
            if (suspectMurderer == JOSEPH){
                cout << "This screams Joseph is the murderer!!\n"; 
            } else {
                cout << "Okay. Joseph's alibi is terrible. But I'm pretty sure he\n" <<
                "wasn't even on campus when the murder happened.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 15){
        cout << "You chose to question Greg.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was in my box as usual. I literally can't leave there unless\n" <<
            "someone moves me...\n";
            if (suspectMurderer == GREG){
                cout << "This inflatable lobster talks. Are we really going to believe\n" <<
                "he can't move?? Don't disregard Greg just because he's technically inanimate.\n";
            } else {
                cout << "This accusation is ridiculous. Time to look elsewhere...\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was just chilling trying to pick up on one of the squirmles,\n" <<
            "but she really wasn't giving me the time of day...\n";
            if (suspectMurderer == GREG){
                cout << "None of the squirmles could corroborate this story.\n"; 
            } else {
                cout << "An inflatable lobster... and a squirmle.. \n" <<
                "Let's try to be more serious about this investigation.. Next!\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    }

    //Prompt user to choose second suspect to question:
    cout << endl;
    cout << "Now choose a second suspect to question.\n" <<
    "Decide who you'd like to talk to by selecting the suspect's\n" <<
    "corresponding number (11-15) from the menu below.\n" <<
    "*note: you should only select each suspect once\n";
    //Output menu of suspects for choice:
    cout << "Suspects: \n" <<
            "11. Sholly\n" <<
            "12. Amber\n" <<
            "13. RA Max\n" <<
            "14. Joseph\n" <<
            "15. Greg the Lobster" << endl;
    cin >> suspectQuestioned;

    //Creates different alibis for each suspect chosen:
    if (suspectQuestioned == 11){
        cout << "You chose to question Sholly.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was getting dinner off campus.\n";
            if (suspectMurderer == SHOLLY){
                cout << "Those details seem vague... I wouldn't be convinced.\n";
            } else {
                cout << "Not a super detailed alibi, but I'm sure she's\n" <<
                "telling the truth\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was on a date with my boyfriend!\n" <<
            "Who I'm with during my personal time is none of your business...\n";
            if (suspectMurderer == SHOLLY){
                cout << "That was pretty snippy...\n" <<
                "She seems highly on edge for someone who is trying to prove\n" <<
                "her innocence.\n"; 
            } else {
                cout << "Her and her boyfriend are allllwwayyyys together\n" <<
                "so that seems like a major possibility.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 12){
        cout << "You chose to question Amber.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was in the OR... wish I wasn't though!\n" <<
            "I got tacos in there, but they did NOT hit different.\n";
            if (suspectMurderer == AMBER){
                cout << "I'm almost certain there weren't tacos last night...\n";
            } else {
                cout << "She's so right! I totally believe her...\n" <<
                "Why make your alibi so easily checkable if it wasn't true?\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was talking to the librarian about a book I need for finals.\n" <<
            "I don't have time to commit a crime with the end of the semester\n" << 
            "right around the corner...\n";
            if (suspectMurderer == AMBER){
                cout << "I heard the librarian went home sick yesterday...\n" <<
                "really seems like she's lying\n"; 
            } else {
                cout << "She's a nerd. It checks out.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 13){
        cout << "You chose to question Max.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was at an RHA meeting. My last of the semester, thank God!\n";
            if (suspectMurderer == RAMAX){
                cout << "I'm pretty sure RHA meetings happen on a different night.\n";
            } else {
                cout << "Max is such a great RA, I truly believe he could do no wrong.\n" <<
                "I feel very certain that he is not our killer.\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was with a resident who was in need of some help.\n" <<
            "I was the RA on duty last night so I was pretty swamped with calls.\n";
            if (suspectMurderer == RAMAX){
                cout << "I know for a face Max was not the RA on duty last night...\n" 
                "so what was he really doing?? Very suspicious.\n"; 
            } else {
                cout << "Max takes his job so seriously. He would not lie\n" <<
                "about helping a resident. Someone else committed this crime.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 14){
        cout << "You chose to question Joseph.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I went back to my house in Cutoff. I don't have any written\n" <<
            "exams this week so I booked it on out of my dorm.\n";
            if (suspectMurderer == JOSEPH){
                cout << "I definitely saw his car in the Freret Street Parking\n" <<
                "garage. No way he went home without his car...\n";
            } else {
                cout << "I asked Joseph to hang out yesterday and he told me he\n" <<
                "went home before he even had reason to give an alibi.\n" <<
                "He's almost certainly telling the truth.\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I wasn't with anyone.\n";
            if (suspectMurderer == JOSEPH){
                cout << "This screams Joseph is the murderer!!\n"; 
            } else {
                cout << "Okay. Joseph's alibi is terrible. But I'm pretty sure he\n" <<
                "wasn't even on campus when the murder happened.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 15){
        cout << "You chose to question Greg.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was in my box as usual. I literally can't leave there unless\n" <<
            "someone moves me...\n";
            if (suspectMurderer == GREG){
                cout << "This inflatable lobster talks. Are we really going to believe\n" <<
                "he can't move?? Don't disregard Greg just because he's technically inanimate.\n";
            } else {
                cout << "This accusation is ridiculous. Time to look elsewhere...\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was just chilling trying to pick up on one of the squirmles,\n" <<
            "but she really wasn't giving me the time of day...\n";
            if (suspectMurderer == GREG){
                cout << "None of the squirmles could corroborate this story.\n"; 
            } else {
                cout << "An inflatable lobster... and a squirmle.. \n" <<
                "Let's try to be more serious about this investigation.. Next!\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    }
    
    //Prompt user to choose third suspect to question:
    cout << endl;
    cout << "Now choose a third suspect to question.\n" <<
    "Decide who you'd like to talk to by selecting the suspect's\n" <<
    "corresponding number (11-15) from the menu below.\n" <<
    "*note: you should only select each suspect once\n";
    //Output menu of suspects for choice:
    cout << "Suspects: \n" <<
            "11. Sholly\n" <<
            "12. Amber\n" <<
            "13. RA Max\n" <<
            "14. Joseph\n" <<
            "15. Greg the Lobster" << endl;
    cin >> suspectQuestioned;

    //Creates different alibis for each suspect chosen:
    if (suspectQuestioned == 11){
        cout << "You chose to question Sholly.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was getting dinner off campus.\n";
            if (suspectMurderer == SHOLLY){
                cout << "Those details seem vague... I wouldn't be convinced.\n";
            } else {
                cout << "Not a super detailed alibi, but I'm sure she's\n" <<
                "telling the truth\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was on a date with my boyfriend!\n" <<
            "Who I'm with during my personal time is none of your business...\n";
            if (suspectMurderer == SHOLLY){
                cout << "That was pretty snippy...\n" <<
                "She seems highly on edge for someone who is trying to prove\n" <<
                "her innocence.\n"; 
            } else {
                cout << "Her and her boyfriend are allllwwayyyys together\n" <<
                "so that seems like a major possibility.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 12){
        cout << "You chose to question Amber.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was in the OR... wish I wasn't though!\n" <<
            "I got tacos in there, but they did NOT hit different.\n";
            if (suspectMurderer == AMBER){
                cout << "I'm almost certain there weren't tacos last night...\n";
            } else {
                cout << "She's so right! I totally believe her...\n" <<
                "Why make your alibi so easily checkable if it wasn't true?\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was talking to the librarian about a book I need for finals.\n" <<
            "I don't have time to commit a crime with the end of the semester\n" << 
            "right around the corner...\n";
            if (suspectMurderer == AMBER){
                cout << "I heard the librarian went home sick yesterday...\n" <<
                "really seems like she's lying\n"; 
            } else {
                cout << "She's a nerd. It checks out.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 13){
        cout << "You chose to question Max.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was at an RHA meeting. My last of the semester, thank God!\n";
            if (suspectMurderer == RAMAX){
                cout << "I'm pretty sure RHA meetings happen on a different night.\n";
            } else {
                cout << "Max is such a great RA, I truly believe he could do no wrong.\n" <<
                "I feel very certain that he is not our killer.\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was with a resident who was in need of some help.\n" <<
            "I was the RA on duty last night so I was pretty swamped with calls.\n";
            if (suspectMurderer == RAMAX){
                cout << "I know for a face Max was not the RA on duty last night...\n" 
                "so what was he really doing?? Very suspicious.\n"; 
            } else {
                cout << "Max takes his job so seriously. He would not lie\n" <<
                "about helping a resident. Someone else committed this crime.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 14){
        cout << "You chose to question Joseph.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I went back to my house in Cutoff. I don't have any written\n" <<
            "exams this week so I booked it on out of my dorm.\n";
            if (suspectMurderer == JOSEPH){
                cout << "I definitely saw his car in the Freret Street Parking\n" <<
                "garage. No way he went home without his car...\n";
            } else {
                cout << "I asked Joseph to hang out yesterday and he told me he\n" <<
                "went home before he even had reason to give an alibi.\n" <<
                "He's almost certainly telling the truth.\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I wasn't with anyone.\n";
            if (suspectMurderer == JOSEPH){
                cout << "This screams Joseph is the murderer!!\n"; 
            } else {
                cout << "Okay. Joseph's alibi is terrible. But I'm pretty sure he\n" <<
                "wasn't even on campus when the murder happened.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 15){
        cout << "You chose to question Greg.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was in my box as usual. I literally can't leave there unless\n" <<
            "someone moves me...\n";
            if (suspectMurderer == GREG){
                cout << "This inflatable lobster talks. Are we really going to believe\n" <<
                "he can't move?? Don't disregard Greg just because he's technically inanimate.\n";
            } else {
                cout << "This accusation is ridiculous. Time to look elsewhere...\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was just chilling trying to pick up on one of the squirmles,\n" <<
            "but she really wasn't giving me the time of day...\n";
            if (suspectMurderer == GREG){
                cout << "None of the squirmles could corroborate this story.\n"; 
            } else {
                cout << "An inflatable lobster... and a squirmle.. \n" <<
                "Let's try to be more serious about this investigation.. Next!\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    }

    //Prompt user to choose fourth suspect to question:
    cout << endl;
    cout << "Now choose a fourth suspect to question.\n" <<
    "Decide who you'd like to talk to by selecting the suspect's\n" <<
    "corresponding number (11-15) from the menu below.\n" <<
    "*note: you should only select each suspect once\n";
    //Output menu of suspects for choice:
    cout << "Suspects: \n" <<
            "11. Sholly\n" <<
            "12. Amber\n" <<
            "13. RA Max\n" <<
            "14. Joseph\n" <<
            "15. Greg the Lobster" << endl;
    cin >> suspectQuestioned;

    //Creates different alibis for each suspect chosen:
    if (suspectQuestioned == 11){
        cout << "You chose to question Sholly.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was getting dinner off campus.\n";
            if (suspectMurderer == SHOLLY){
                cout << "Those details seem vague... I wouldn't be convinced.\n";
            } else {
                cout << "Not a super detailed alibi, but I'm sure she's\n" <<
                "telling the truth\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was on a date with my boyfriend!\n" <<
            "Who I'm with during my personal time is none of your business...\n";
            if (suspectMurderer == SHOLLY){
                cout << "That was pretty snippy...\n" <<
                "She seems highly on edge for someone who is trying to prove\n" <<
                "her innocence.\n"; 
            } else {
                cout << "Her and her boyfriend are allllwwayyyys together\n" <<
                "so that seems like a major possibility.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 12){
        cout << "You chose to question Amber.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was in the OR... wish I wasn't though!\n" <<
            "I got tacos in there, but they did NOT hit different.\n";
            if (suspectMurderer == AMBER){
                cout << "I'm almost certain there weren't tacos last night...\n";
            } else {
                cout << "She's so right! I totally believe her...\n" <<
                "Why make your alibi so easily checkable if it wasn't true?\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was talking to the librarian about a book I need for finals.\n" <<
            "I don't have time to commit a crime with the end of the semester\n" << 
            "right around the corner...\n";
            if (suspectMurderer == AMBER){
                cout << "I heard the librarian went home sick yesterday...\n" <<
                "really seems like she's lying\n"; 
            } else {
                cout << "She's a nerd. It checks out.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 13){
        cout << "You chose to question Max.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was at an RHA meeting. My last of the semester, thank God!\n";
            if (suspectMurderer == RAMAX){
                cout << "I'm pretty sure RHA meetings happen on a different night.\n";
            } else {
                cout << "Max is such a great RA, I truly believe he could do no wrong.\n" <<
                "I feel very certain that he is not our killer.\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was with a resident who was in need of some help.\n" <<
            "I was the RA on duty last night so I was pretty swamped with calls.\n";
            if (suspectMurderer == RAMAX){
                cout << "I know for a face Max was not the RA on duty last night...\n" 
                "so what was he really doing?? Very suspicious.\n"; 
            } else {
                cout << "Max takes his job so seriously. He would not lie\n" <<
                "about helping a resident. Someone else committed this crime.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 14){
        cout << "You chose to question Joseph.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I went back to my house in Cutoff. I don't have any written\n" <<
            "exams this week so I booked it on out of my dorm.\n";
            if (suspectMurderer == JOSEPH){
                cout << "I definitely saw his car in the Freret Street Parking\n" <<
                "garage. No way he went home without his car...\n";
            } else {
                cout << "I asked Joseph to hang out yesterday and he told me he\n" <<
                "went home before he even had reason to give an alibi.\n" <<
                "He's almost certainly telling the truth.\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I wasn't with anyone.\n";
            if (suspectMurderer == JOSEPH){
                cout << "This screams Joseph is the murderer!!\n"; 
            } else {
                cout << "Okay. Joseph's alibi is terrible. But I'm pretty sure he\n" <<
                "wasn't even on campus when the murder happened.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 15){
        cout << "You chose to question Greg.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was in my box as usual. I literally can't leave there unless\n" <<
            "someone moves me...\n";
            if (suspectMurderer == GREG){
                cout << "This inflatable lobster talks. Are we really going to believe\n" <<
                "he can't move?? Don't disregard Greg just because he's technically inanimate.\n";
            } else {
                cout << "This accusation is ridiculous. Time to look elsewhere...\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was just chilling trying to pick up on one of the squirmles,\n" <<
            "but she really wasn't giving me the time of day...\n";
            if (suspectMurderer == GREG){
                cout << "None of the squirmles could corroborate this story.\n"; 
            } else {
                cout << "An inflatable lobster... and a squirmle.. \n" <<
                "Let's try to be more serious about this investigation.. Next!\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    }

    //Prompt user to choose final suspect to question:
    cout << endl;
    cout << "Finally, select your last suspect to question.\n" <<
    "Decide who you'd like to talk to by selecting the suspect's\n" <<
    "corresponding number (11-15) from the menu below.\n" <<
    "*note: you should only select each suspect once\n";
    //Output menu of suspects for choice:
    cout << "Suspects: \n" <<
            "11. Sholly\n" <<
            "12. Amber\n" <<
            "13. RA Max\n" <<
            "14. Joseph\n" <<
            "15. Greg the Lobster" << endl;
    cin >> suspectQuestioned;

    //Creates different alibis for each suspect chosen:
    if (suspectQuestioned == 11){
        cout << "You chose to question Sholly.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was getting dinner off campus.\n";
            if (suspectMurderer == SHOLLY){
                cout << "Those details seem vague... I wouldn't be convinced.\n";
            } else {
                cout << "Not a super detailed alibi, but I'm sure she's\n" <<
                "telling the truth\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was on a date with my boyfriend!\n" <<
            "Who I'm with during my personal time is none of your business...\n";
            if (suspectMurderer == SHOLLY){
                cout << "That was pretty snippy...\n" <<
                "She seems highly on edge for someone who is trying to prove\n" <<
                "her innocence.\n"; 
            } else {
                cout << "Her and her boyfriend are allllwwayyyys together\n" <<
                "so that seems like a major possibility.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 12){
        cout << "You chose to question Amber.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was in the OR... wish I wasn't though!\n" <<
            "I got tacos in there, but they did NOT hit different.\n";
            if (suspectMurderer == AMBER){
                cout << "I'm almost certain there weren't tacos last night...\n";
            } else {
                cout << "She's so right! I totally believe her...\n" <<
                "Why make your alibi so easily checkable if it wasn't true?\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was talking to the librarian about a book I need for finals.\n" <<
            "I don't have time to commit a crime with the end of the semester\n" << 
            "right around the corner...\n";
            if (suspectMurderer == AMBER){
                cout << "I heard the librarian went home sick yesterday...\n" <<
                "really seems like she's lying\n"; 
            } else {
                cout << "She's a nerd. It checks out.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 13){
        cout << "You chose to question Max.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was at an RHA meeting. My last of the semester, thank God!\n";
            if (suspectMurderer == RAMAX){
                cout << "I'm pretty sure RHA meetings happen on a different night.\n";
            } else {
                cout << "Max is such a great RA, I truly believe he could do no wrong.\n" <<
                "I feel very certain that he is not our killer.\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was with a resident who was in need of some help.\n" <<
            "I was the RA on duty last night so I was pretty swamped with calls.\n";
            if (suspectMurderer == RAMAX){
                cout << "I know for a face Max was not the RA on duty last night...\n" 
                "so what was he really doing?? Very suspicious.\n"; 
            } else {
                cout << "Max takes his job so seriously. He would not lie\n" <<
                "about helping a resident. Someone else committed this crime.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 14){
        cout << "You chose to question Joseph.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I went back to my house in Cutoff. I don't have any written\n" <<
            "exams this week so I booked it on out of my dorm.\n";
            if (suspectMurderer == JOSEPH){
                cout << "I definitely saw his car in the Freret Street Parking\n" <<
                "garage. No way he went home without his car...\n";
            } else {
                cout << "I asked Joseph to hang out yesterday and he told me he\n" <<
                "went home before he even had reason to give an alibi.\n" <<
                "He's almost certainly telling the truth.\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I wasn't with anyone.\n";
            if (suspectMurderer == JOSEPH){
                cout << "This screams Joseph is the murderer!!\n"; 
            } else {
                cout << "Okay. Joseph's alibi is terrible. But I'm pretty sure he\n" <<
                "wasn't even on campus when the murder happened.\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    } else if (suspectQuestioned == 15){
        cout << "You chose to question Greg.\n" <<
        "What would you like to ask? Select either a or b.\n" <<
        "a. Where were you when the crime was committed?\n" <<
        "b. Who were you with when the crime was committed?\n";
        cin >> questionChosen;
        if (questionChosen == 'a' || questionChosen == 'A'){
            cout << "I was in my box as usual. I literally can't leave there unless\n" <<
            "someone moves me...\n";
            if (suspectMurderer == GREG){
                cout << "This inflatable lobster talks. Are we really going to believe\n" <<
                "he can't move?? Don't disregard Greg just because he's technically inanimate.\n";
            } else {
                cout << "This accusation is ridiculous. Time to look elsewhere...\n";
            }
        } else if (questionChosen == 'b' || questionChosen == 'B'){
            cout << "I was just chilling trying to pick up on one of the squirmles,\n" <<
            "but she really wasn't giving me the time of day...";
            if (suspectMurderer == GREG){
                cout << "None of the squirmles could corroborate this story.\n"; 
            } else {
                cout << "An inflatable lobster... and a squirmle.. \n" <<
                "Let's try to be more serious about this investigation.. Next!\n";
            }
        } else {
            cout << "Invalid choice. Please select either a/A or b/B\n";
        }
    }

    //Clarifying message to user about weapons and locations:
    cout << endl;
    cout << "Earlier you received clues regarding each weapon that was potentially used\n" <<
    "in this crime. The locations where each weapon was located were incorrect. The murderer\n" <<
    "moved everything in an attempt to cover their tracks. See below the list of locations again\n" <<
    "to solve where this crime actually occurred before the body was moved into the hallway.\n";
    
    //Variable to store user choice for location clue:
    int locationClueChoice;
    //Output message telling user to select a location to receive a clue about:
    cout << "Choose a location to receive a clue about by selecting the location's\n" <<
    "corresponding number (6-10) from the menu below.\n";
    cout << "Locations: \n" <<
            "6.  Elevator\n" <<
            "7.  Lounge\n" <<
            "8.  1006\n" <<
            "9.  RA Max's room\n" <<
            "10. Stairwell" << endl;
    cin >> locationClueChoice;

    if (locationClueChoice == 6){
        cout << "You chose the elevator.\n";
        if (locationCommitted == ELEVATOR){
            cout << "I was told the elevator was stopped on floor 10 for hours\n" <<
            "yesterday. Seems like more than enough time to commit a murder...\n";
        } else {
            cout << "The elevator gets stuck in Buddig all the time... odds are\n" <<
            "it being stuck on floor 10 yesterday was just an odd coincidence.\n";
        }
    } else if (locationClueChoice == 7){
        cout << "You chose the Lounge.\n";
        if (locationCommitted == LOUNGE){
            cout << "Some of the furniture was over turned last night... I figured\n" <<
            "it was just teenagers being rowdy, but now I have a really bad feeling.\n";
        } else {
            cout << "Someone's been having a Harry Potter movie marathon in the lounge\n" <<
            "for the past two days. I don't think it's possible for someone\n" <<
            "to commit a crime in there and have no one see it.\n";
        }
    } else if (locationClueChoice == 8){
        cout << "You chose room 1006.\n";
        if (locationCommitted == TENZEROSIX){
            cout << "After quiet hours last night Sholly and Amber's suitemates\n" <<
            "said they heard a ton of very suspicious noise...\n";
        } else {
            cout << "A ton of noise was coming from Sholly and Amber's room last\n" <<
            "night, but they're usually pretty loud so that doesn't seem like\n" <<
            "something to worry about.\n";
        }
    } else if (locationClueChoice == 9){
        cout << "You chose Max's room.\n";
        if (locationCommitted == MAXROOM){
            cout << "Max always leaves his door unlocked if someone needs to talk.\n" <<
            "It's very important to note how easy it would be for someone to go in and\n" <<
            "out of there unnoticed\n";
        } else {
            cout << "Max's room borders the lounge. If a crime was committed in there\n" <<
            "someone definitely would have heard it because the walls are so thin.\n" <<
            "This is not looking like a stong murder location candidate...\n";
        }
    } else if (locationClueChoice == 10){
        cout << "You chose the stairwell.\n";
        if (locationCommitted == STAIRWELL){
            cout << "Any noise coming from the stairwell could have been easily masked.\n" <<
            "This would be a very inconspicuous place to commit a crime...\n";
        } else{
            cout << "People are constantly coming in and out of the stairwell.\n" <<
            "There's absolutely no way something could happen in there without someone\n" <<
            "seeing.\n";
        }
    } else {
        cout << "Invalid menu selection. Please choose (6-10).\n";
    }
    
    //Output message telling user to select second location to receive a clue about:
    cout << endl;
    cout << "Choose a second location to receive a clue about by selecting the\n" <<
    "location's corresponding number (6-10) from the menu below.\n" <<
    "*Note: each location only has one clue.\n";
    cout << "Locations: \n" <<
            "6.  Elevator\n" <<
            "7.  Lounge\n" <<
            "8.  1006\n" <<
            "9.  RA Max's room\n" <<
            "10. Stairwell" << endl;
    cin >> locationClueChoice;

    if (locationClueChoice == 6){
        cout << "You chose the elevator.\n";
        if (locationCommitted == ELEVATOR){
            cout << "I was told the elevator was stopped on floor 10 for hours\n" <<
            "yesterday. Seems like more than enough time to commit a murder...\n";
        } else {
            cout << "The elevator gets stuck in Buddig all the time... odds are\n" <<
            "it being stuck on floor 10 yesterday was just an odd coincidence.\n";
        }
    } else if (locationClueChoice == 7){
        cout << "You chose the Lounge.\n";
        if (locationCommitted == LOUNGE){
            cout << "Some of the furniture was over turned last night... I figured\n" <<
            "it was just teenagers being rowdy, but now I have a really bad feeling.\n";
        } else {
            cout << "Someone's been having a Harry Potter movie marathon in the lounge\n" <<
            "for the past two days. I don't think it's possible for someone\n" <<
            "to commit a crime in there and have no one see it.\n";
        }
    } else if (locationClueChoice == 8){
        cout << "You chose room 1006.\n";
        if (locationCommitted == TENZEROSIX){
            cout << "After quiet hours last night Sholly and Amber's suitemates\n" <<
            "said they heard a ton of very suspicious noise...\n";
        } else {
            cout << "A ton of noise was coming from Sholly and Amber's room last\n" <<
            "night, but they're usually pretty loud so that doesn't seem like\n" <<
            "something to worry about.\n";
        }
    } else if (locationClueChoice == 9){
        cout << "You chose Max's room.\n";
        if (locationCommitted == MAXROOM){
            cout << "Max always leaves his door unlocked if someone needs to talk.\n" <<
            "It's very important to note how easy it would be for someone to go in and\n" <<
            "out of there unnoticed\n";
        } else {
            cout << "Max's room borders the lounge. If a crime was committed in there\n" <<
            "someone definitely would have heard it because the walls are so thin.\n" <<
            "This is not looking like a stong murder location candidate...\n";
        }
    } else if (locationClueChoice == 10){
        cout << "You chose the stairwell.\n";
        if (locationCommitted == STAIRWELL){
            cout << "Any noise coming from the stairwell could have been easily masked.\n" <<
            "This would be a very inconspicuous place to commit a crime...\n";
        } else{
            cout << "People are constantly coming in and out of the stairwell.\n" <<
            "There's absolutely no way something could happen in there without someone\n" <<
            "seeing.\n";
        }
    } else {
        cout << "Invalid menu selection. Please choose (6-10).\n";
    }

    //Output message telling user to select third location to receive a clue about:
    cout << endl;
    cout << "Choose a third location to receive a clue about by selecting the\n" <<
    "location's corresponding number (6-10) from the menu below.\n" <<
    "*Note: each location only has one clue.\n";
    cout << "Locations: \n" <<
            "6.  Elevator\n" <<
            "7.  Lounge\n" <<
            "8.  1006\n" <<
            "9.  RA Max's room\n" <<
            "10. Stairwell" << endl;
    cin >> locationClueChoice;

    if (locationClueChoice == 6){
        cout << "You chose the elevator.\n";
        if (locationCommitted == ELEVATOR){
            cout << "I was told the elevator was stopped on floor 10 for hours\n" <<
            "yesterday. Seems like more than enough time to commit a murder...\n";
        } else {
            cout << "The elevator gets stuck in Buddig all the time... odds are\n" <<
            "it being stuck on floor 10 yesterday was just an odd coincidence.\n";
        }
    } else if (locationClueChoice == 7){
        cout << "You chose the Lounge.\n";
        if (locationCommitted == LOUNGE){
            cout << "Some of the furniture was over turned last night... I figured\n" <<
            "it was just teenagers being rowdy, but now I have a really bad feeling.\n";
        } else {
            cout << "Someone's been having a Harry Potter movie marathon in the lounge\n" <<
            "for the past two days. I don't think it's possible for someone\n" <<
            "to commit a crime in there and have no one see it.\n";
        }
    } else if (locationClueChoice == 8){
        cout << "You chose room 1006.\n";
        if (locationCommitted == TENZEROSIX){
            cout << "After quiet hours last night Sholly and Amber's suitemates\n" <<
            "said they heard a ton of very suspicious noise...\n";
        } else {
            cout << "A ton of noise was coming from Sholly and Amber's room last\n" <<
            "night, but they're usually pretty loud so that doesn't seem like\n" <<
            "something to worry about.\n";
        }
    } else if (locationClueChoice == 9){
        cout << "You chose Max's room.\n";
        if (locationCommitted == MAXROOM){
            cout << "Max always leaves his door unlocked if someone needs to talk.\n" <<
            "It's very important to note how easy it would be for someone to go in and\n" <<
            "out of there unnoticed\n";
        } else {
            cout << "Max's room borders the lounge. If a crime was committed in there\n" <<
            "someone definitely would have heard it because the walls are so thin.\n" <<
            "This is not looking like a stong murder location candidate...\n";
        }
    } else if (locationClueChoice == 10){
        cout << "You chose the stairwell.\n";
        if (locationCommitted == STAIRWELL){
            cout << "Any noise coming from the stairwell could have been easily masked.\n" <<
            "This would be a very inconspicuous place to commit a crime...\n";
        } else{
            cout << "People are constantly coming in and out of the stairwell.\n" <<
            "There's absolutely no way something could happen in there without someone\n" <<
            "seeing.\n";
        }
    } else {
        cout << "Invalid menu selection. Please choose (6-10).\n";
    }

    //Output message telling user to select fourth location to receive a clue about:
    cout << endl;
    cout << "Choose a fourth location to receive a clue about by selecting the\n" <<
    "location's corresponding number (6-10) from the menu below.\n" <<
    "*Note: each location only has one clue.\n";
    cout << "Locations: \n" <<
            "6.  Elevator\n" <<
            "7.  Lounge\n" <<
            "8.  1006\n" <<
            "9.  RA Max's room\n" <<
            "10. Stairwell" << endl;
    cin >> locationClueChoice;

    if (locationClueChoice == 6){
        cout << "You chose the elevator.\n";
        if (locationCommitted == ELEVATOR){
            cout << "I was told the elevator was stopped on floor 10 for hours\n" <<
            "yesterday. Seems like more than enough time to commit a murder...\n";
        } else {
            cout << "The elevator gets stuck in Buddig all the time... odds are\n" <<
            "it being stuck on floor 10 yesterday was just an odd coincidence.\n";
        }
    } else if (locationClueChoice == 7){
        cout << "You chose the Lounge.\n";
        if (locationCommitted == LOUNGE){
            cout << "Some of the furniture was over turned last night... I figured\n" <<
            "it was just teenagers being rowdy, but now I have a really bad feeling.\n";
        } else {
            cout << "Someone's been having a Harry Potter movie marathon in the lounge\n" <<
            "for the past two days. I don't think it's possible for someone\n" <<
            "to commit a crime in there and have no one see it.\n";
        }
    } else if (locationClueChoice == 8){
        cout << "You chose room 1006.\n";
        if (locationCommitted == TENZEROSIX){
            cout << "After quiet hours last night Sholly and Amber's suitemates\n" <<
            "said they heard a ton of very suspicious noise...\n";
        } else {
            cout << "A ton of noise was coming from Sholly and Amber's room last\n" <<
            "night, but they're usually pretty loud so that doesn't seem like\n" <<
            "something to worry about.\n";
        }
    } else if (locationClueChoice == 9){
        cout << "You chose Max's room.\n";
        if (locationCommitted == MAXROOM){
            cout << "Max always leaves his door unlocked if someone needs to talk.\n" <<
            "It's very important to note how easy it would be for someone to go in and\n" <<
            "out of there unnoticed\n";
        } else {
            cout << "Max's room borders the lounge. If a crime was committed in there\n" <<
            "someone definitely would have heard it because the walls are so thin.\n" <<
            "This is not looking like a stong murder location candidate...\n";
        }
    } else if (locationClueChoice == 10){
        cout << "You chose the stairwell.\n";
        if (locationCommitted == STAIRWELL){
            cout << "Any noise coming from the stairwell could have been easily masked.\n" <<
            "This would be a very inconspicuous place to commit a crime...\n";
        } else{
            cout << "People are constantly coming in and out of the stairwell.\n" <<
            "There's absolutely no way something could happen in there without someone\n" <<
            "seeing.\n";
        }
    } else {
        cout << "Invalid menu selection. Please choose (6-10).\n";
    }

    //Output message telling user to select the last location to receive a clue about:
    cout << endl;
    cout << "Choose the last location to receive a clue about by selecting the\n" <<
    "location's corresponding number (6-10) from the menu below.\n" <<
    "*Note: each location only has one clue.\n";
    cout << "Locations: \n" <<
            "6.  Elevator\n" <<
            "7.  Lounge\n" <<
            "8.  1006\n" <<
            "9.  RA Max's room\n" <<
            "10. Stairwell" << endl;
    cin >> locationClueChoice;

    if (locationClueChoice == 6){
        cout << "You chose the elevator.\n";
        if (locationCommitted == ELEVATOR){
            cout << "I was told the elevator was stopped on floor 10 for hours\n" <<
            "yesterday. Seems like more than enough time to commit a murder...\n";
        } else {
            cout << "The elevator gets stuck in Buddig all the time... odds are\n" <<
            "it being stuck on floor 10 yesterday was just an odd coincidence.\n";
        }
    } else if (locationClueChoice == 7){
        cout << "You chose the Lounge.\n";
        if (locationCommitted == LOUNGE){
            cout << "Some of the furniture was over turned last night... I figured\n" <<
            "it was just teenagers being rowdy, but now I have a really bad feeling.\n";
        } else {
            cout << "Someone's been having a Harry Potter movie marathon in the lounge\n" <<
            "for the past two days. I don't think it's possible for someone\n" <<
            "to commit a crime in there and have no one see it.\n";
        }
    } else if (locationClueChoice == 8){
        cout << "You chose room 1006.\n";
        if (locationCommitted == TENZEROSIX){
            cout << "After quiet hours last night Sholly and Amber's suitemates\n" <<
            "said they heard a ton of very suspicious noise...\n";
        } else {
            cout << "A ton of noise was coming from Sholly and Amber's room last\n" <<
            "night, but they're usually pretty loud so that doesn't seem like\n" <<
            "something to worry about.\n";
        }
    } else if (locationClueChoice == 9){
        cout << "You chose Max's room.\n";
        if (locationCommitted == MAXROOM){
            cout << "Max always leaves his door unlocked if someone needs to talk.\n" <<
            "It's very important to note how easy it would be for someone to go in and\n" <<
            "out of there unnoticed\n";
        } else {
            cout << "Max's room borders the lounge. If a crime was committed in there\n" <<
            "someone definitely would have heard it because the walls are so thin.\n" <<
            "This is not looking like a stong murder location candidate...\n";
        }
    } else if (locationClueChoice == 10){
        cout << "You chose the stairwell.\n";
        if (locationCommitted == STAIRWELL){
            cout << "Any noise coming from the stairwell could have been easily masked.\n" <<
            "This would be a very inconspicuous place to commit a crime...\n";
        } else{
            cout << "People are constantly coming in and out of the stairwell.\n" <<
            "There's absolutely no way something could happen in there without someone\n" <<
            "seeing.\n";
        }
    } else {
        cout << "Invalid menu selection. Please choose (6-10).\n";
    }

//Variable to store user guess for weapon:
int userWeaponUsed;

//Variable to store user guess for location:
int userLocationCommitted;

//Variable to store user guess for suspect:
int userSuspectKiller;

//Output prompt to finish the game:
cout << endl;
cout << "You have now received all the clues necessary to decide what weapon was used,\n" <<
"what location the crime was committed in, and who committed the crime.\n" << 
"Make your selection by inputting the corresponding number as your choice.\n";

//Prompt for user to select which weapon was used in the crime:
cout << endl;
cout << "Select a number (1-5) to choose which weapon you think was used to commit the crime.\n";
cout << "Weapons: \n" <<
        "1.  Fork\n" <<
        "2.  Diffuser\n" <<
        "3.  Push pins\n" <<
        "4.  Stapler\n" <<
        "5.  Pillow" << endl;
cin >> userWeaponUsed;

//If statement relating user weapon choice to actual computer generated random weapon:
if (userWeaponUsed == weaponUsed){
    cout << "Correct! " << weaponUsed << " was the weapon used in the crime!\n";
} else {
    cout << "Incorrect. " << userWeaponUsed << " was not the murder weapon.\n" <<
    "The actual weapon used in the crime was " << weaponUsed << ".\n";
}

//Prompt for user to select which location the crime was committed in:
cout << endl;
cout << "Select a number (6-10) to choose which location you think the crime was committed in.\n";
cout << "Locations: \n" <<
        "6.  Elevator\n" <<
        "7.  Lounge\n" <<
        "8.  1006\n" <<
        "9.  RA Max's room\n" <<
        "10. Stairwell" << endl;
cin >> userLocationCommitted;

//If statement relating user location choice to actual computer generated random location:
if (userLocationCommitted == locationCommitted){
    cout << "Correct! " << locationCommitted << " was the location where the crime was committed!\n";
} else {
    cout << "Incorrect. " << userLocationCommitted << " was not the location where the crime\n" <<
    "occurred. The actual location where the crime was committed was " << locationCommitted << ".\n";
}

//Prompt for user to select which suspect is the murderer:
cout << endl;
cout << "Select a number (11-15) to choose which suspect you think is the killer.\n";
cout << "Suspects: \n" <<
        "11. Sholly\n" <<
        "12. Amber\n" <<
        "13. RA Max\n" <<
        "14. Joseph\n" <<
        "15. Greg the Lobster" << endl;
cin >> userSuspectKiller;

//If statement relating user suspect choice to actual computer generated random suspect:
if (userSuspectKiller == suspectMurderer){
    cout << "Correct! " << suspectMurderer << " was the killer!\n";
} else {
    cout << "Incorrect. " << userSuspectKiller << " was not the murderer.\n" <<
    suspectMurderer << " was the actual killer.\n";
}

cout << endl;
if (userWeaponUsed == weaponUsed && userLocationCommitted == locationCommitted && userSuspectKiller == suspectMurderer){
    cout << "Congratulations!!!! You successfully identified the weapon, location, and suspect.\n" <<
    "You won the game!! Thanks for playing Clue: Floor 10 Edition.\n";
} else {
    cout << "You incorrectly identified at least one of the elements of the murder.\n" <<
    "You didn't solve the case, but thank you for playing!\n";
}

return 0;

}
