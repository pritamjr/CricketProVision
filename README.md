# 🏏CricketProVision

![CricketProVision Logo](url_to_logo_image)

## 📕Overview

This is a simple Cricket Management System that allows users to manage cricket players, teams, and matches. The system is designed to be easy-to-use and provides various functionalities for handling player and team information, conducting matches, and updating world records. This system follows Object-Oriented Programming (OOP) principles and comprehensive set of features.

## 🌠Key Features

1. **Player Management**
   - Add new players with their name, shirt number, average, ICC ranking, total runs, total matches played, and total wickets taken.
   - Remove existing players from the system.
   - Search for players by name or shirt number.
   - Update player information like average, ICC ranking, total runs, and total wickets.

2. **Team Management**
   - Add new cricket teams with their name, ICC ranking, number of players, matches won, matches lost, captain, and coach.
   - Remove existing teams from the system.
   - Search for teams by name or ICC ranking.
   - Update team information including ICC ranking, captain, and coach.
   - Display team details along with the list of players in each team.

3. **Match Management**
   - Conduct matches between two teams, providing options to set match type, tournament name, date, and venue.
   - Schedule future matches with the necessary details.
   - Update world records for the most runs, most sixes, most fours, most centuries, highest average, best strike rate, and most wickets taken.
   - Determine the winner of the match and display relevant statistics.
   - Keep track of players' and teams' performance statistics, such as runs scored, sixes, fours, centuries, wickets taken, highest average, and best strike rate.

4. **File Handling:**
   - The system utilizes file handling to store and retrieve player, team, and match data, ensuring data persistence and easy access.

## 🧠Implementation

CricketProVision is implemented using C++ programming language, following Object-Oriented Programming (OOP) concepts. The system is divided into three main classes:

1. **Player:** Represents individual cricket players and includes methods for adding, removing, searching, and updating player information.

2. **Team:** Represents cricket teams and inherits properties and methods from the Player class. It also includes additional features for team management, such as assigning captains and coaches.

3. **Match:** Represents cricket matches between teams and inherits properties and methods from the Team class. It includes functionality for conducting matches, updating match results, and maintaining player and team statistics.

The system makes use of header files for class declarations and source files for defining the class methods. File handling is used to store player, team, and match data in text files, ensuring data integrity and persistence across sessions.

## ⚒️How to Use

1. Clone the repository to your local machine.
2. Compile the code using a C++ compiler (e.g., g++).
3. Run the executable to launch CricketProVision.
4. Follow the on-screen instructions to perform various operations, such as adding players, managing teams, scheduling matches, and conducting matches.

## 🙋‍♂️Contribution
We welcome contributions to improve CricketProVision and add more features to make it even better for cricket enthusiasts. If you have any ideas or suggestions, feel free to open an issue or submit a pull request.

---

🔥Give your cricket management skills a boost with CricketProVision! Manage teams, track player performance, and schedule matches like a pro. Download now and dive into the exciting world of cricket management!
