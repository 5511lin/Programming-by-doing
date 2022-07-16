How to Play Connect 4 | The Rules of Connect 4
Players must connect 4 of the same colored discs in a row to win.
Only one piece is played at a time.
Players can be on the offensive or defensive.
The game ends when there is a 4-in-a-row or a stalemate.
The starter of the previous game goes second on the next game.

Check Function: 
Checks if the column the player chose is all filled out and unavailable.
Draw Table Function: 
Sets up an empty table for players to play
Win Check Function: 
Check if player won the game
If player has won then "end" = true and end program
If player has not won "end" = false and keeps running p choice function.
P Choice Function: 
let player choose a column and also check if the player has chosen a column outside of the table's horizontal range. 
If the column is in the table's horizontal range, it runs the check function.
If the column is outside of the horizontal range, it prints unavailable spot.
Runs the win_check function at the end.
