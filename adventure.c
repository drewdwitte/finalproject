#include <stdio.h>
#include <string.h>
int main (void)
{

char input[256], start[256], ticket [256], flight [256], tractor[256], search [256],riddle[256],destiny[256], bear[256], mystery[256], train[256], song[256], decision[256];
//char input[256], ticket[256];
int a =3;
int b =2;
int bitcoin;
bitcoin= crypto(a, b); 



printf ("One day, you arrive home from your job as a divorce attorney and get ready to walk your dog: Bernie.\nHowever, all you find is a letter that states that your pooch has been stolen by the New York Mafia.\nYou have 5 bitcoin.\nWhat do you want to take?\na:The Plane \nb:Your Car\n");
fgets (input, 256, stdin);
sscanf (input, "%s", start);

if (strcmp(start, "a")==0)
{
  printf("You decide to head to the airport and fly to New York.\n");
  
  printf("\nYou arrive at the airport on a quest to save your dog. How will you get on a plane?\n\na:buy a ticket for 2 bitcoins.\nb:sneak in\n");

fgets (input, 256, stdin);
sscanf (input, "%s", ticket);

if (strcmp(ticket, "a")==0)
{
  printf("You purchase a ticket and hop on. Happy trails!\n");
  bitcoin=bitcoin-2;
  printf("You have %d bitcoins \n", bitcoin);
}
else if (strcmp(ticket, "b")==0)
{
  printf("You try to sneak your way through TSA but are immediately arrested by Homeland Security.\nHave a fun time in Guantanamo.");
  return 0;
}

printf("\nYou board the plane and enjoy a pleasant flight for several hours.\nYou then notice that somebody on the plane is watching you very closely. He must be part of the mob. How will you proceed?\na: you fight the mafioso.\nb: You jump out of the plane.\n");

fgets (input, 256, stdin);
sscanf (input, "%s", flight);

if (strcmp(flight, "a")==0)
{
  printf("Considering that he is a trained assassin, he makes you look like a clown and fulfills his contact.");
  return 0;
}

else if (strcmp(flight, "b")==0)
{
  printf("\nYou rush into the pilot's cabin and steal a parachute. You then wrench open the door and are sucked out.\n\nYou land and realize you are in Iowa.You are approached by a farmer in a tractor\n You need that tractor to get to New York but the tractor costs five bitcoins.\nWhat will you do?\na:work for the farmer at a rate of 1 bitcoin a day and buy the tractor.\nb:Steal the tractor.\n");
}

fgets (input, 256, stdin);
sscanf (input, "%s", tractor);

if (strcmp(tractor, "a")==0)
{
  printf("You decide to work for farmer.\n");
  
  for (int bitcoin=4;bitcoin<=5;bitcoin++)
  {
    printf("It ain't much, but it's honest work.\nYou have %d bitcoin today\n",bitcoin);
  }

  printf("You have enough bitcoin to purchase the tractor from the farmer and you buy it.\n");
  bitcoin=0;
}

else if (strcmp(tractor, "b")==0)
{
 printf("You reach down, grab an ear of corn, and chuck at the farmer's head.\nHe falls off the tractor, unconcious, and you steal the tractor.\n");
}

printf("\nYou take your tractor down the old town road and ride till you reach New York.\nNow in New York, you must decide how to find the mob boss. How will you do it?\na:You shout out in the middle of Time Square if anybody knows the mob boss.\nb: You go to, Capelletti's, one of the local dive bars and pose as a recruit.\n ");

fgets (input, 256, stdin);
sscanf (input, "%s", search);


if (strcmp(search, "a")==0)
{
  printf("You rush out to the middle of Times Square and scream out looking for the mob boss. You are immediately taken out by one of the boss' men.\nGood Grief!");
  return 0;
}

else if (strcmp(search, "b")==0)
{
  printf("You enter the restaurant and walk up to the bartender.As you're posing as a new member, he is about to take you to the boss before he stops.\nHe says that in order to prove ypu're in the gang, you have to answer the mafia riddle.\n\n");
}

printf("What has hands but doesn't clap?\na: a clock.\nb: a veteran with PTSD.\n");

fgets (input, 256, stdin);
sscanf (input, "%s", riddle);

if (strcmp(riddle, "a")==0)
{
  printf("\nThe bartender says that that is correct and leads you to the back room.\n");
}

else if (strcmp (riddle, "b")==0)
{
  printf("\nThe bartender tells you that your joke is very offensive. You agree and feel that you deserve the ten tommyguns now pointed at your face.");
  return 0;
}

printf("In the backroom, the boss is sitting facing away from you.\nHe turns his chair around to reveal that your dog was the boss the entire time!\nHow will you take this news?\na: Join him in a life of crime.\nb: Take him back home.\n");

fgets (input, 256, stdin);
sscanf (input, "%s", riddle);

if (strcmp(riddle, "a")==0)
{
  printf("\nYou abandon your conscience and join your dog in a life of crime.\nIt was diffcult at first to give up the strong sense of virtue needed to be a divorce attorney, but you did it in the name of helping your best friend.");
return 0;
}

else if (strcmp(riddle, "b")==0)
{
  printf("\nYou've spent 7 bitcoins on this trip.\n You are not coming home emptyhanded.\nYou pack your pooch into his kennel and bring him back to your old life.");
  return 0;
}
}
else if (strcmp(start, "b")==0)
{
   printf(" You decide to hop in your car and drive over to New York.\n");
  
  
  printf("\nYou are able to drive all the way to the great state of Oklahoma with no problems.\nHowever, someone part of the mob must have messed with your car and you have broken down in the middle of the woods.\nYou wander around aimlessly for several hours in search for any sort of civilization.\n At one point in your search you hear an ominous growl coming from behind you and when you turn around you discover that a wild grizzly bear has been stalking you!\nWhat will you do with the grizzly bear?\na:Attack the grizzly bear \nb: Try to communicate\n");
  fgets (input, 256, stdin);
  sscanf (input, "%s", bear);

  if (strcmp(bear, "a")==0)
  {
    printf("You build up your courage and fight off the bear!\nSadly it is a bear and you are a human.\n You stood no chance.");
    return 0;
  
  }
else if (strcmp(bear, "b")==0)
{
  printf("On a whim you try to talk with it.\nSurprisingly, it talks back!\nIt tells you that his name is Jerome the bear.\nYou talk to him about your quest to get to New York and get your dog back from the mafia boss.\nJerome is overwhelmed because he too has a vendetta to settle with the boss.\nHe won't reveal to you what kind of vendetta he has yet but maybe someday.\nJerome helps lead you back to civilizatio and will now accompany you to New York");
}

printf("You and Jerome decide to take the train from Oklahoma to New York. Thankfully, the trains in Oklahoma are Bear friendly.\nAs you get on the train you are greeted by a friendly grandmother and then proceed to sit down.\nYou then give your ticket to the ticket puncher and you excitedly say how you're going to New York. He creepily responds with oh don't worry sir you'll get to your destination.\nThroughout the train ride you notice one man playing with a pocketknife staring at you out of the corner of his eye.\nHalfway through the ride Jerome tells you that he smells a killer. It has to be someone from the mob!\nYou have to find out who it is before they can capture you!\n Who is it?\na: The ticket puncher \nb: The man with the knife\nc: The grandma\n");
fgets (input, 256, stdin);
sscanf (input, "%s", mystery);

if (strcmp(mystery, "a")==0)
{
printf ("You make a quick decision and tackle the ticket puncher. That creepy response couldn't have been for no reason right?\nHowever, as you hold him down you hear Jerome exclaim that isn't the right person!\nBefore you could react you are knocked out cold.\nIt is over.");
return 0;

}
else if (strcmp(mystery, "b")==0) 
{
  printf ("You make a mad dash over to the man with the knife to restrain him!\nBut, all he was doing was cutting his red lobster!\nBefore you could do anything you are knocked out by a clean blow from behind.\nIt is over");
  return 0;

}
else if (strcmp(mystery, "c")==0) 
{
  printf ("You recall the grandma politely greeting you when you got on the train.\nNO ONE HEADING TO NEW YORK IS THAT NICE!\nAs you turn around to face the grandma she has already pulled out a tommy gun. She fires a barrage of bullets over your head and hide behind your seat.\nBefore she is able to get over to you Jerome is able to tackle the elderly gang member and toss her gun away.\nAfter you and Jerome tie her up she exclaims that you will never defeat the boss.\nThe both of you are able to return to your seats and continue your journey.");
}

printf ("Shortly after your incident with the grandma you realize the train isn't driving normally.\nYou go up to the train driver to see what's wrong. When you see him you notice he had been severely injured from one of the stray tommy gun bullets. He can no loger operate the train.\nIn the distance you see another train driving straight towards you!\nIf you don't do something there will be a head on collision with the two trains.\nWhat will you do?\na: Try to steer the train onto another track\nb: Try to brake the train\n");
fgets (input, 256, stdin);
sscanf (input, "%s", train);

if (strcmp(train, "a")==0)
{
  printf ("As you reach for the controls you shift it so the train goes onto the track on the right.\nAs you speed up the train to avoid the collision the two trains come within twenty feet of each other before your train is able to safely go onto the other track.\nAfter this you are able to stabilize the train driver so he is able to get you to New York safely.\n");

}
else if (strcmp(train, "b")==0) 
{
  printf ("You reach for the brakes and with all of your might you try to brake the train.\nBut the speed of the other train is too great and you are not able to stop the collision.\nBoth of the trains have derailed and now you have gotten rid of your only chances to get to New York.");
  return 0;
}

printf ("After a long train ride you and Jerome have finally made it to New York.\nYou realize you have no idea on where the secret hideout is for the mafia.\nThankfully, Jerome was able to procure the secret address from the elderly woman while you were dealing with the train.\nYou head over to the address and you end up in the baddest neighborhood in New York.\nYou walk up to the to a small door in a backalley and you knock on it three times.\nAfter a long pause a voice asks you what you want. You respond with asking to see the mafia boss.\n The man pauses and finally responds with saying if you can answer the secret mafia question.\nWhat is our favorite song?\na: The Godfather Theme\nb: I Want it That Way by The Backstreet Boys/nc: Girls Just Want to Have Fun by Cindi Lauper\n");
fgets (input, 256, stdin);
sscanf (input, "%s", song);

if (strcmp(song, "a")==0)
{
  printf ("He is silent for a moment and then opens the door.\nDelighted, you go in but you hear the man behind you say did you really think we were that generic?\nYou get knocked out and have been kidnapped by the mafia.");
  return 0;
}
else if (strcmp(song, "b")==0)
{
  printf ("He sounds astounded and says you truly are a member of the mafia!\nHe opens the door for you.\nHe sees Jerome behind you and he's taken aback by him. It's probably just because he's a bear.\nYou and Jerome make your way down the stairs and prepare yourselves to finally face the boss.\n");
}
else if (strcmp(song, "c")==0)
{
  printf ("The mysterious man slowly opens the door and you take a step in son.\nHowever, you hear from behind you, while I do admit that is a good song, you're wrong.\n A sack is placed over your head and you have been kidnapped by the mafia.\n");
  return 0;
}

printf ("You and Jerome arrive in a well lit area with paintings of what you can assume to be previous mafia bosses.\nThere is a nice velvet carpet that appears to lead you to a big office.\nThis is it. This is the boss's room.\n As you slowly open the doors it is revealed that no one is in the room only an elegant desk and an empty chair.\nHowever, something does catch your eye. On the wall there is a picture. It is of the woods and in it just one lone bear. This bear seems to be oddly familiar. It almost looks like.....................JEROME!\nAs you turn around to face him he is backed up by about twenty mafia members.\nHe tells you thathe's sorry but there was no other way.\nHow could you have not noticed it was all so obvious.\nHow he got the address and how the man at the door reacted.\nJerome tells you that it's the end of the line and you only had two options.\nThe first one being to join him and be apart of the mafia for a lifetime of service.\nThe other option being that you would be taken hostage by the mafia and you would be used as ransom.\nWhat will you do?\na: Join the Mafia\nb: Accept being kidnapped\nc: Sing to him I Want it That Way\n");
fgets (input, 256, stdin);
sscanf (input, "%s", decision);

if (strcmp(decision, "a")==0)
{
  printf ("You decide to join Jerome in a life of crime.\nThis way you'll be able to see your dog and won't have to be taken hostage.\nHowever, you will always feel like you could've done something more.\nThe End");
  return 0;

}
else if (strcmp(decision, "b")==0)
{
  printf ("You have lost all hope.\nYour best friend Jerome has betrayed you and you could never escape the mafia.\nThe gang cuffs you and now you will become their hostage for ransom.\nThe End");
  return 0;
}
else if (strcmp(decision, "c")==0)
{
  printf ("You decide to make a last ditch effort to reach your best friend Jerome.\nYou remember the gang's favorite song. Jerome's favorite song.\n You begin singing.\nThe other members become confused but Jerome is completely fazed.\nHe holds up a gun and is aiming straight at you.\nThis doesn't stop you and you keep singing.\nBefore he is able to pull the trigger he breaks down crying. He can't do it.\nHe can't kill his best friend.\nHe calls off all of the mafia members and he brings you your dog.\nYou have finally been reunited with your beloved pooch and you are finally going home.\nThe End");
  return 0;
}

}
}
