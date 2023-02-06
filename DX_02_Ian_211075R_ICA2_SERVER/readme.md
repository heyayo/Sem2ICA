# Database Changes
## tb_playerstats

Added "timesPlayed" Entry\
Added "Prestige" Entry

## tb_leaderboard

Added "recordDate" Entry\
Added "finishTime" Entry

# PHP Changes
## ReadLeaderboard.php

Read All From tb_playerstats Into JSON For Leaderboard\

## ReadScoreBoardJSON.php

Scoreboard Is Sorted In Descending Order\
Scoreboard Has No Duplicate Entries

## RegisterBackend.php

Duplicate Username and Email Checks

## AddScoreBackend.php

Insert or Update Depending On Entry

# Unity Changes
## Database Related

Supported Database Changes In WWWForms and FromJSON Functions

## UI Changes

Added Login and Register Input Field Checks\
Added Minimum Letter Requirements for Usernamea and Password When Registering\
Added Store Page\
Added Leaderboard\
Added Pause Button

## Gameplay Changes

Added Spending Cash\
Purchase Extra Time for $25\
Purchase Extra Score for $5\
Prestige Levels After Reaching Level 20\
Scores Higher Than 12 Possible With Money
