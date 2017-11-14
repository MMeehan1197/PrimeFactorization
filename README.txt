 ____       _                
 |  _ \ _ __(_)_ __ ___   ___ 
 | |_) | '__| | '_ ` _ \ / _ \
 |  __/| |  | | | | | | |  __/
 |_|   |_|  |_|_| |_| |_|\___|
 
  _   _                 _               
 | \ | |_   _ _ __ ___ | |__   ___ _ __ 
 |  \| | | | | '_ ` _ \| '_ \ / _ \ '__|
 | |\  | |_| | | | | | | |_) |  __/ |   
 |_| \_|\__,_|_| |_| |_|_.__/ \___|_|   
                                        
  _____          _             _          _   _             
 |  ___|_ _  ___| |_ ___  _ __(_)______ _| |_(_) ___  _ __  
 | |_ / _` |/ __| __/ _ \| '__| |_  / _` | __| |/ _ \| '_ \ 
 |  _| (_| | (__| || (_) | |  | |/ / (_| | |_| | (_) | | | |
 |_|  \__,_|\___|\__\___/|_|  |_/___\__,_|\__|_|\___/|_| |_|
                                                           
  _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ 
 |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|                                                           
  ___                                                         
 | __ ) _   _ _                                                              
 |  _ \| | | (_)                                                             
 | |_) | |_| |_                                                              
 |____/ \__, (_)                                                             
  __  __|___/   _                _   __  __           _                      
 |  \/  (_) ___| |__   __ _  ___| | |  \/  | ___  ___| |__   __ _ _ __       
 | |\/| | |/ __| '_ \ / _` |/ _ \ | | |\/| |/ _ \/ _ \ '_ \ / _` | '_ \      
 | |  | | | (__| | | | (_| |  __/ | | |  | |  __/  __/ | | | (_| | | | |     
 |_|  |_|_|\___|_| |_|\__,_|\___|_| |_|  |_|\___|\___|_| |_|\__,_|_| |_|   
 		   _
   __ _ _ __   __| |                                                         
  / _` | '_ \ / _` |                                                         
 | (_| | | | | (_| |                                                         
  \__,_|_| |_|\__,_|  
  _  __                      _       ____ _          _     _   _             
 | |/ /___  _ __   __ _ _ __| | __  / ___| |__  _ __(_)___| |_(_) __ _ _ __  
 | ' // _ \| '_ \ / _` | '__| |/ / | |   | '_ \| '__| / __| __| |/ _` | '_ \ 
 | . \ (_) | | | | (_| | |  |   <  | |___| | | | |  | \__ \ |_| | (_| | | | |
 |_|\_\___/|_| |_|\__,_|_|  |_|\_\  \____|_| |_|_|  |_|___/\__|_|\__,_|_| |_|                                                           
 
  _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ 
 |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|
 
 
 Limits of our functions: Keep in mind that all of our functions can only work when the output is
 						  less than the MAX_INT (2^32 - 1). So, for instance, if you input 2 very large numbers,
 						  the LCM will output a gibberish number since the LCM would be much greater then MAX_INT.
 						  
 
 FAQ's about our project:
 
 ----------------------------------------------------------------------------------------------------
 
 Question: What is prime factorization?
 Answer: Prime factorization is when you represent a number into a product of its prime components.
 
 Example: 210 = 2 * 3 * 5 * 7 (All of 2,3,5,and 7 are prime numbers)
 
 ----------------------------------------------------------------------------------------------------
 
 Question: What in the world does our program do?
 Answer: Our program will ask you to input 2 numbers, and then proceed to find the 
 		 prime factors of the numbers that are inputed. It will then find the 
 		 Greatest Common Divisor (GCD), Least Common Multiple (LCD),
 		 and find all of the prime and non-prime factors of a number.
 		 
 ----------------------------------------------------------------------------------------------------
 		 
 Question: How does the prime factorization work?
 Answer: We imported a database of the first six million prime numbers and use it to search for the
 		 prime factors of the numbers that you input.
 		 
 ----------------------------------------------------------------------------------------------------
 		 
 Question: Is there a limit to how large the number being entered can be?
 Answer: Well, I'm glad you asked. As long as none of the prime factors of the numbers that
 		 were inputed exceed 8 digits, it will work all the way up to the MAX_INT (2147483647 - 1)
 
 ----------------------------------------------------------------------------------------------------
 
 Question: What are real-world applications of this?
 Answer: Modern Cryptography uses this in creating public encryption keys. Public encryption keys can
 		 be produced by multiplying two very large prime numbers. The technique of breaking down numbers 
 		 into its prime factors could prove to be very useful if a more efficient algorithm is discovered. 

----------------------------------------------------------------------------------------------------

 Question: How can I double check if a number that I inputted is prime?
 Answer: Our file named "primes1.txt" contains all of the prime numbers from 1-104395301, so 
 		 you can promptly open the file and press the "control" button in combination with
 		 the key labeled "F" on your keyboard and type in the number to find it
                                                                             