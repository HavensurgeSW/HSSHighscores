# HSSHighscores
Havensurge Softworks Highscores allows for management of simple 2 field highscores. Functions include sorting, adding, deleting and pulling specific data from your entries.

String values from the <string> C++ Library are used.

### Functions guide

#### initList()
Fills all of the highscore list with a name and a score.

#### insertSort(ScoreEntry ENTRY)
Recieves ScoreEntry struct data and places it in the correct rank.

#### forceInsert(ScoreEntry entry, int pos)
Recieves ScoreEntry struct data and places it in whichever array index you choose to.

#### deleteEntry(int pos);
Sets an entry's score back to 0 and replaces the name with the default "---". Re-sorts the list with the remaining items.

#### clearAllEntries();
Sets all scores to 0 and replaces the names with the default "---".

#### returnRankEntry(int pos)
Returns a ScoreEntry structure from any given index position

#### returnRankName(int pos)
Returns a string value from any given index position

#### returnRankScore(int pos)
Returns a long integer value from any given index position
