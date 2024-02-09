# Operating Systems HW 1 Basic Command Line in c++

This program runs various shell commands and displays the output.

• dir (list directory contents, Windows equivalent of ls)

• cd (print directory)

• mkdir (create a new directory)

• echo (display a message)

• type (concatenate and display content of files, Windows equivalent of cat)


Run the program and then it will display a Main Menu with options 1-6.
1. List directory contents
2. Print a working directory 
3. Create a new directory 
4. Display a message 
5. Concatenate and display the content of a file 
6. Exit




Entering 1, you will see the directory contents 

Entering 2, you will see the current working directory for which you are in

Entering 3 will create a new directory named "New_Directory" and will tell you if it exists or not. If it does, it will get rid of the "Old_Directory".

Entering 4, you will see "Hello World!" using the "echo" command. It will also tell you if the echo command was executed properly.

Entering 5 will open a document named "Hello.txt" and display its contents ("Hi, how are you?") and if it is unable to open, it will tell you that it was unable to open. It will also open "HelloWorld.txt" and display its contents as well ("Hello World from the file!").

Entering 6 will exit the entire program.

Any other number will result in an "error" message and loop asking the user for proper input.






To stop command injection attacks and unauthorized access to system resources, it is essential to validate user input and manage security risks with the system function. By ensuring that only expected and safe values are accepted, proper input validation lowers the possibility that malicious commands will be carried out. Additional security and vulnerability mitigation strategies include escaping special characters, restricting privileges, and thinking about safer alternatives to running system commands. Developers can reduce the risk of user-controlled input exploitation and secure their applications by adhering to these best practices.
