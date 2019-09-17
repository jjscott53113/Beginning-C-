// Assignment 3
// Josh Scott
// For loops, strings, and Arrays 

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
	string name;
	cout << "Please enter your name: ";
	cin >> name;

	// Welcome the player
	cout << "Hello " << name << ", which simulation would you like to run?\n";
	cout << "Use 1 to simulate the Journey through the woods.\n";
	cout << "Use 2 to simulate the trip to the mall.\n";


	int numInput;
	cin >> numInput;

	switch (numInput) {
	case 1: {

		cout << endl; //Blank Line

		cout << "This is where the fun will begin.\n";
		cout << "We are going to go on a journey through the woods,\n";
		cout << "there are also going to be some obstacles to hurdle but,\n";
		cout << "eventually we will make it through on this long and tough journey.\n";

		// New list of strings, using array size of 10
		string inventory[10];

		int totalItems = 0;
		// Initial Items in Bag (x4)
		inventory[totalItems++] = "Knife";
		inventory[totalItems++] = "Candle";
		inventory[totalItems++] = "FireStick";
		inventory[totalItems++] = "Water";

		cout << "Before you set out this morning you decided to grab a few items,\n";
		cout << "these items will help you through your journey today!!!\n";

		cout << "There are 4 items that were already in your bag, but I,\n";
		cout << "would like for you to input 2 more items of your choice.\n";
		cout << "Here are your items so far: \n";

		for (int i = 0; i < totalItems; i++) {
			cout << i + 1 << ". " << inventory[i] << endl;
		}

		cout << endl; // Blank Line

		string playerInput1; // Player added item 
		string playerInput2; // Player added item 

		cout << "Please input your first item to add to your bag: ";
		cin >> playerInput1; // Player Input for Item
		inventory[totalItems++] = playerInput1;

		cout << "Please input you second item to add to your bag: ";
		cin >> playerInput2; // Player Input for Item
		inventory[totalItems++] = playerInput2;

		cout << endl; // Blank Line

		cout << "Here is a full list of all your items now: \n";
		for (int i = 0; i < totalItems; i++) {
			cout << i + 1 << ". " << inventory[i] << endl;
		}

		cout << endl; // Blank Line

		cout << "Ok, we have our items in our bag and we are ready to set off.\n";
		cout << "Our first obstacle is crossing the river, there is a fallen tree upstream.\n";
		cout << "Lets travel further up and see if we are able to cross at the fallen tree.\n";
		cout << "Once there you realize you can cross here and make it past the river!\n";
		cout << "So, far we have seen many great things, lots of animals and wildlife.\n";
		cout << "We have traveled for about 2 hours and start to get a little thirsty.\n";
		cout << "Lets search in your bag for the water that you brought along.\n";

		cout << endl; // Blank Line

		cout << "Please enter Water to search your bag for it.\n";
		string playerInput3;
		cin >> playerInput3; // Player Input for Item 

		if (playerInput3 == "Water") {
			cout << "Great, lets look through your items\n";
		}
		else if (playerInput3 != "Water") {
			cout << "Please try again, you are searching for Water.\n";
			cin >> playerInput3;
				if (playerInput3 == "Water") {
					cout << "Great, Lets look through your items.\n";
				}
				else {
					cout << "Sorry that is not valid!!!\n";
						return 0;
				}
		}
		else {
			cout << "Sorry that is not vaild!!!\n";
			return 0;
		}

		cout << endl; //Blank Line

		cout << "Searching...\n";

		// Pause here for 5 seconds
		this_thread::sleep_for(chrono::milliseconds(5000));

		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] == playerInput3) {
				cout << "You have " << playerInput3 << "!\n";
				cout << "You drink the " << playerInput3 << " immediately!\n";
				inventory[i] = "Empty bottle of " + playerInput3;
			}
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}

		cout << endl; // Blank Line

		cout << "Since you have drank the water you decide to get rid of the empty bottle.\n";
		cout << "You throw the bottle in the trash.\n";
		inventory[3] = "";

		cout << "Here is a full list of all your items now: \n";
		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}

		cout << endl; // Blank Line

		string playerInput4;
		string playerInput5;

		cout << "While wandering through the woods you happen to come across an abandoned,\n";
		cout << "tent that seems to be full of supplies. You decide to grab 2 items.\n";

		cout << endl; // Blank Line

		cout << "Enter the 1st item you want to keep: ";
		cin >> playerInput4;
		inventory[totalItems++] = playerInput4;

		cout << "Enter the 2nd item you want to keep: ";
		cin >> playerInput5;
		inventory[totalItems++] = playerInput5;

		cout << "Here is a full list of all your items now: \n";
		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}

		cout << endl; // Blank Line

		cout << "Alirght we now have some very helpful items in our possession.\n";
		cout << "Next we stumble across a hollow tree that seems to have some gems in it,\n";
		cout << "Lets add one of the gems to our bag and continue on our journey.\n";
		cout << "Which gem would you like to take with you and add to you bag?\n";

		string playerInput6;
		cin >> playerInput6;
		inventory[totalItems++] = playerInput6;

		cout << endl; // Blank Line

		cout << "Cool now we have added " << playerInput6 << " to our bag and are moving on.\n";
		cout << "We have come to a split in the trail and need to decide which way we are going to travel.\n";
		cout << "Would you like to go left or right (left/right)???\n";

		string playerInput7;
		cin >> playerInput7;

		cout << endl; // Blank Line

		if (playerInput7 == "left") {
			cout << "Lefty Loosey!\n";
		}
		else {
			cout << "Righty Tighty!\n";
		}

		cout << "Awesome you have decided to go " << playerInput7 << ", this should be very interesting.\n";
		cout << "I must warn you that there is a very mean Ogre up ahead and he has a tendency to be very hateful!!!\n";
		cout << "Shall we continue up the trail (y/n)?\n";

		char playerInput8;
		cin >> playerInput8;

		cout << endl; // Blank Line

		if (playerInput8 == 'y') {
			cout << "Great, we will continue up the trail and see whats in store for us.\n";
		}
		else {
			cout << "We had a great trip, but it's time to end it now!!!\n";
			return 0;
		}

		cout << "After treaveling up the trail a bit longer you have finally stumbled across that mean old Ogre.\n";
		cout << "Lets try to talk to him and see if he is as mean as everyone says.\n";
		cout << "You walk up to the Ogre and ask his name. He responds with a grunt.\n";
		cout << "With a little bit of fear you decide to continue the conversation and you ask, How are you Mr. Ogre?\n";

		cout << endl; // Blank Line

		cout << "His response scares you half to death and he has demanded you give up your most prized posession.\n";

		cout << endl; // Blank Line

		cout << "Here is a full list of all your items now: \n";
		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}

		cout << endl; // Blank line

		cout << "Please enter what item you want to forfeit.\n";

		string playerInput9;
		cin >> playerInput9;

		cout << endl; // Blank Line

		cout << "Searching...\n";

		// Pause here for 5 seconds
		this_thread::sleep_for(chrono::milliseconds(5000));

		cout << endl; // Blank Line

		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] == playerInput9) {
				cout << "You have a " << playerInput9 << "!\n";
				cout << "You pull the " << playerInput9 << " out of your bag!\n";
				cout << "Next you hand it over to the Ogre and he tells you to get on your way.\n";
				inventory[i] = "";
			}
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}

		cout << endl; //Blank Line

		cout << "Since you have lost the " << playerInput9 << " to the ogre,\n";
		cout << "Your bag now contains:\n";
		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}

		cout << endl; // Blank Line

		cout << "Now that you have faced the Ogre and given up at least one item you can continue on,\n";
		cout << "your journey through the woods.\n";
		cout << "After a day of traveling you are warn out and decide you have had enough.\n";
		cout << "This concludes your journey and I hope you have a great rest of your day!!!\n";
		cout << "Good Bye, Great lad!\n";

		break;
	}

	case 2: {

		cout << endl; //Blank Line

		cout << "This is where the fun will begin.\n";
		cout << "We are going to go on a shopping at the mall,\n";
		cout << "there are also going to be some obstacles to hurdle but,\n";
		cout << "eventually you will make it through the stores with what you were looking for.\n";

		// New list of strings, using array size of 10
		string inventory[10];

		int totalItems = 0;
		// Initial Items in Bag (x4)
		inventory[totalItems++] = "Hat";
		inventory[totalItems++] = "Shoes";
		inventory[totalItems++] = "HandSanitizer";
		inventory[totalItems++] = "Soda";

		cout << "Before you set out this morning you decided to grab a few items,\n";
		cout << "these items will help you through the mall today!!!\n";

		cout << "There are 4 items that were already in your bag, but I,\n";
		cout << "would like for you to input 2 more items of your choice.\n";
		cout << "Here are your items so far: \n";

		for (int i = 0; i < totalItems; i++) {
			cout << i + 1 << ". " << inventory[i] << endl;
		}

		cout << endl; // Blank Line

		string playerInput1; // Player added item 
		string playerInput2; // Player added item 

		cout << "Please input your first item to add to your bag: ";
		cin >> playerInput1; // Player Input for Item
		inventory[totalItems++] = playerInput1;

		cout << "Please input you second item to add to your bag: ";
		cin >> playerInput2; // Player Input for Item
		inventory[totalItems++] = playerInput2;

		cout << endl; // Blank Line

		cout << "Here is a full list of all your items now: \n";
		for (int i = 0; i < totalItems; i++) {
			cout << i + 1 << ". " << inventory[i] << endl;
		}

		cout << endl; // Blank Line

		cout << "Ok, we have our items in our bag and we are ready to leave the house.\n";
		cout << "Our first obstacle is finding a parking spot, there arent many spots open.\n";
		cout << "Lets travel further up and see if we are able to find a spot somewhere else.\n";
		cout << "Once there you realize there is a free space next to the door!\n";
		cout << "So far we have seen a traffic accident and lots of people.\n";
		cout << "Now you enter the mall and decide which store you want to visit first.\n";
		cout << "After sifting through the items in the first store you decide you're thirsty.\n";
		cout << "Lets find that bottle of soda you had in your bag this morning.\n";

		cout << endl; // Blank Line

		cout << "Please enter Soda to search your bag for it.\n";
		string playerInput3;
		cin >> playerInput3; // Player Input for Item 

		if (playerInput3 == "Soda") {
			cout << "Great, lets look through your items\n";
		}
		else if (playerInput3 != "Soda") {
			cout << "Please try again, you are searching for Soda.\n";
			cin >> playerInput3;
				if (playerInput3 == "Soda") {
					cout << "Great, Lets look through your items.\n";
				}
				else {
					cout << "Sorry that is not valid!!!\n";
					return 0;
				}
		}

		cout << endl; //Blank Line

		cout << "Searching...\n";

		// Pause here for 5 seconds
		this_thread::sleep_for(chrono::milliseconds(5000));

		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] == playerInput3) {
				cout << "You have " << playerInput3 << "!\n";
				cout << "You drink the " << playerInput3 << " immediately!\n";
				inventory[i] = "Empty bottle of " + playerInput3;
			}
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}

		cout << endl; // Blank Line

		cout << "Since you have drank the soda you decide to get rid of the empty bottle.\n";
		cout << "You throw the bottle in the trash.\n";
		inventory[3] = "";

		cout << "Here is a full list of all your items now: \n";
		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}

		cout << endl; // Blank Line

		string playerInput4;
		string playerInput5;

		cout << "While wandering through the mall you happen to come across an abandoned,\n";
		cout << "store that is full of free items to any customers, you decide to go in.\n";
		cout << "You have found a couple items that you would like to keep, please enter them next.\n";

		cout << endl; // Blank Line

		cout << "Enter the 1st item you want to keep: ";
		cin >> playerInput4;
		inventory[totalItems++] = playerInput4;

		cout << "Enter the 2nd item you want to keep: ";
		cin >> playerInput5;
		inventory[totalItems++] = playerInput5;

		cout << "Here is a full list of all your items now: \n";
		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}

		cout << endl; // Blank Line

		cout << "Alirght you now have some awesome items in our possession.\n";
		cout << "Next you stumble into the jewely store that lets costumers,\n";
		cout << "select one gem they would like to keep for FREE!!!\n";
		cout << "Lets add one of the gems to our bag and continue with your shopping.\n";
		cout << "Which gem would you like to take with you and add to you bag?\n";

		string playerInput6;
		cin >> playerInput6;
		inventory[totalItems++] = playerInput6;

		cout << endl; // Blank Line

		cout << "Cool now we have added " << playerInput6 << " to our bag and are moving on.\n";
		cout << "We have come to a decision and need to decide which way we are going next.\n";
		cout << "Would you like to go up or down (up/down)???\n";

		string playerInput7;
		cin >> playerInput7;

		cout << endl; // Blank Line

		if (playerInput7 == "up") {
			cout << "Up the elevator you go!\n";
		}
		else {
			cout << "Down the stairs you go!\n";
		}

		cout << "Awesome you have decided to go " << playerInput7 << ", this should be very interesting.\n";
		cout << "I must warn you that there is a very mean Security guard ahead and he has a tendency to be very hateful!!!\n";
		cout << "Shall we continue in the direction you have chosen (y/n)?\n";

		char playerInput8;
		cin >> playerInput8;

		cout << endl; // Blank Line

		if (playerInput8 == 'y') {
			cout << "Great, you will continue and see whats in store for you next.\n";
		}
		else {
			cout << "You had a great trip, but it's time to end it now!!!\n";
			return 0;
		}

		cout << "After walking  in the mall a bit longer you have finally stumbled across that mean Security guard.\n";
		cout << "Lets try to talk to him and see if he is as mean as everyone says.\n";
		cout << "You walk up to the Guard and ask his name. He responds with a grunt.\n";
		cout << "With a little bit of fear you decide to continue the conversation and you ask, How are you Mr.?\n";

		cout << endl; // Blank Line

		cout << "His response scares you half to death and he has demanded you give up your most prized posession.\n";

		cout << endl; // Blank Line

		cout << "Here is a full list of all your items now: \n";
		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}

		cout << endl; // Blank line

		cout << "Please enter what item you want to forfeit.\n";

		string playerInput9;
		cin >> playerInput9;

		cout << endl; // Blank Line

		cout << "Searching...\n";

		// Pause here for 5 seconds
		this_thread::sleep_for(chrono::milliseconds(5000));

		cout << endl; // Blank Line

		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] == playerInput9) {
				cout << "You have a " << playerInput9 << "!\n";
				cout << "You pull the " << playerInput9 << " out of your bag!\n";
				cout << "Next you hand it over to the Guard and he tells you to get on your way.\n";
				inventory[i] = "";
			}
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}

		cout << endl; // Blank Line

		cout << "Since you have lost the " << playerInput9 << " to the guard,\n";
		cout << "Your bag now contains:\n";

		for (int i = 0; i < totalItems; i++) {
			if (inventory[i] != "") {
				cout << "- " << inventory[i] << endl;
			}
			else {
				continue;
			}
		}


		cout << endl; // Blank Line

		cout << "Now that you have faced the Guard and given up at least one item you can continue on,\n";
		cout << "your journey through the mall.\n";
		cout << "After a day of shopping you are warn out and decide you have had enough.\n";
		cout << "You decide its time to leave the mall and all the madness behind you.\n";
		cout << "This concludes your journey and I hope you have a great rest of your day!!!\n";
		cout << "Good Bye, Great lad!\n";

		break;
	}

	default: {
		cout << "Sorry, That is not an option!!!\n";
		break;
	}
	}

	return 0;
}