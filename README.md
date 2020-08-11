# Movie_suggestions-Rule-based-

# Files Used
There are two text files being used in this program.
1.	Index.txt – this is a text file which contains the list of languages and genres that a user can choose from, along with an index corresponding to each language and genre.

Example content for index.txt file
languages                             GENRE
01 Catonese/Mandarin                  01 Action
02 Hindi                              02 Adventure
03 Japanese                           03 Comedy
04 Kannada                            04 Crime
05 Korean                             05 Drama
06 Tagalog                            06 Fantasy
11 any                                17 Any

2.	Data.txt – this is also a text file. It contains a list of movie names along with a list of all the genres it belongs to in one line, followed by the description in the next few lines.The first two strings of every line in the file is a number corresponding to indexes used to access or search for the line.

Example content for data.txt file
0511 104234 Beauty inside fantasy, romance.
0511 104234 Beauty inside is a 2015 star-studded South Korean high-concept romantic comedy film based on the 2012 American social film The Beauty Inside, about a man who wakes up every day in a different body.
0511 104234 Furniture designer Woo-jin wakes up in a different body every day, regardless of age, gender and nationality. Sometimes he's a man, a woman, old, young, or even a foreigner. He's the same person on the inside, but on the outside he's always someone new. Looking at a different face in the mirror every morning is hard for him to get used to.
                                                                    
In this file the first string of every line corresponds to the index of the language the film is made in and the second string contains indexes of all the genres the movie belongs to as a single string.
11 is the index corresponding to the option “any” for language and 34 is that of genre. Therefore they are a part of the string for all movies in the database file.

