#Algorithm for guesser game

```
main():
    make a 20 length char array -> userName
    make an integer -> guess & initialize first value
    make an integer -> correct (rand generated)
    make an integer -> turns & initialize to zero
    make an integer -> keepGoing & initialize to -1 (boolean -1 & 0)
    
    seed random number generator
    generate a random number between 1 and 100 and put into correct
    ask user name and put in userName
    greet user with their name
    
    while keepGoing is true (-1):
        increment turns
        ask user for a number and put into -> guess
        if guess < correct:
            tell user "Too low"
        elif guess > correct:
            tell user "Too high"
        else:
            tell user "You guessed correct!"
            set keepGoing to False (0)

    evaluate the performance
    if turns < 7:
        say "You did great"
    elif turns > 7:
        say "You did alright"
    else:
        say "You did good"
    
```

