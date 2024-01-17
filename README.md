2xc3 Final Project, C programming- Password Resilience Analyzer
In the realm of cybersecurity, the strength of passwords is crucial in defending sensitive information from
unauthorized incursions and potential security breaches. The Password Resilience Analyzer has emerged as an
essential tool in this arena, allowing both individuals and organizations to assess the resilience of their passwords
against the onslaught of brute-force and sophisticated attacks. By mimicking possible attack strategies on a
selected password, the Resilience analyzer offers a deeper understanding of the potential vulnerabilities inherent
in a password, prompting users to develop stronger, more secure combinations. As cyber threats continue to
advance in complexity, ensuring that passwords are fortified against these challenges is of utmost importance,
and tools like the Password Resilience Analyzer are indispensable allies in this dynamic digital theater.
Objective: Your task is to design and develop a software program using the C language, aptly named the
"Password Resilience Analyzer". This program will be tasked with assessing the strength of a password, bearing
in mind a set of predetermined rules and guidelines.
Background: In today's digitally-driven age, a strong password is more than just a gatekeeper to personal
accounts—it's a fortress that guards sensitive data and ensures digital security. But, what really defines the
strength of a password? It's not merely about length or complexity; it's about understanding a mix of
characteristics that withstand various hacking techniques. Factors like length, use of diverse character sets,
avoidance of predictable patterns, and the non-reliance on easily guessable information all come into play.
With cyber threats becoming increasingly sophisticated, the importance of robust passwords cannot be
overstated. Through the Password Resilience Analyzer, you'll delve deep into the anatomy of passwords,
examining specific traits and characteristics to determine their robustness. By the end of this project, you'll not
only master the art of creating strong passwords but also be equipped with the skills to help others understand
and appreciate the nuances of password security.
Deliverable features & requirements of the project:
1. Main Menu 
Description: Implement a user-friendly main menu interface to navigate through the program.
• Display the main interface: 
• Handle user input for option selections correctly: 
• Provide accurate responses to each selection: 
Options to provide:
• Test a new password: Allows the user to enter a password for strength analysis.
• View strength of the last tested password: Shows the strength rating (Weak, Moderate,
Strong) of the previously tested password.
• Exit: Close the program.
2. Password Input:
Prompt the user to input a password and store it for analysis.
• Prompt the user to enter a password for testing. 
• If the entered password is less than 8 characters, display an error message and ask the user to
re-enter a longer password. 
3. Strength Tests:
A password's strength is determined based on multiple criteria. For each criterion met, the password gains a
strength point.
Description: Evaluate the password based on various criteria.
• Check for the presence of lowercase letters: 
• Check for the presence of uppercase letters: 
• Check for numerical digits: 
• Check for special characters such as !@#$%^&*(): 
• Award Mark for lengthy passwords (12+ characters): 
4. Functions Implemented:
Each criterion above should have a dedicated function to check its condition.
You'll need to create the following functions:
• Implement hasLowercase(): Does the password contain lowercase letters? 
• Implement hasUppercase(): Does the password have uppercase letters? 
• Implement hasDigit(): Does the password contain numbers? 
• Implement hasSpecialChar(): Are there special characters in the password? 
• Implement evaluateStrength(): Based on the previous checks, what's the total strength
score of the password? 
5. Password Strength Score:
• The total strength of the password is computed as a score, ranging from 0 (weakest) to 5
(strongest). 
• As each strength criterion is met, a point is added to the score. For instance, if a password has a
digit and a lowercase letter but nothing else, it gets 2 points. 
6. Output:
• Based on the computed score, the password is categorized into:
• 0-2 points: "Weak"
• 3-4 points: "Moderate"
• 5 points: "Strong"
• Display the strength category to the user after analysis.
