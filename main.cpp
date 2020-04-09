#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       ball
//  action 1:   ball bounces
ball.bounce();
//  action 2:   ball crashes
ball.crashes();
//  action 3:   ball stops rolling
 ball.stopRolling();
//  2)
//  Noun:       plant
//  action 1:   plant oxygenates
plant.oxygenates();
//  action 2:   plant produces CO2
plant.produceCO2();
//  action 3:   plant grows
 plant.grow();
//  3)
//  Noun:       cellphone
//  action 1:   cellphone vibrates
cellphone.vibrate();
//  action 2:   cellphone rings
cellphone.ring();
//  action 3:   celphone warms up
cellphone.warmUp();
//  4)
//  Noun:       sound
//  action 1:   sound plays
sound.play();
//  action 2:   sound stops
sound.stop();
//  action 3:   sound fades
 sound.fade();
//  5)
//  Noun:       crane
//  action 1:   crane pulls
crane.pull();
//  action 2:   crane oxidize
crane.oxidize();
//  action 3:   crane lifts up
crane.liftUp();
//  6)
//  Noun:       bird
//  action 1:   bird flies
bird.fly();
//  action 2:   bird sleeps
bird.sleep();
//  action 3:   bird eats
bird.eat();
//  7)
//  Noun:       boat
//  action 1:   boat floats
boat.floats();
//  action 2:   boat contaminates
boat.contaminate();
//  action 3:   boat sinks
boat.sink();
//  8)
//  Noun:       drone
//  action 1:   drone take a photograph
drone.takePhotograph();
//  action 2:   drone records
drone.record();
//  action 3:   drone spins left
drone.spinLeft();
//  9)
//  Noun:       dog
//  action 1:   dog barks
dog.bark();
//  action 2:   dog jumps
dog.jump();
//  action 3:   dog runs
dog.run();
//  10)
//  Noun:       sun
//  action 1:   sun warms
sun.warm();
//  action 2:   sun explodes
sun.explode();
//  action 3:   sun shines
sun.shine();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
