#!/usr/bin/perl
use strict;
use warnings;

# Declare variables
my $firstName;
my $lastName;
my $age;
my $email;

# Welcome user
print "Welcome to The Learning Lounge!\n\n";

# Ask for user details
print "Please enter your first name: ";
$firstName = <>;

print "Please enter your last name: ";
$lastName = <>;

print "Please enter your age: ";
$age = <>;

print "Please enter your email address: ";
$email = <>;

# Print confirmation
print "\nThank you for signing up! Your details are as follows:\n\n";
print "Name: $firstName $lastName\n";
print "Age: $age\n";
print "Email: $email\n\n";

# Print courses
print "We offer the following courses:\n\n";
print "101 - Introduction to Programming\n";
print "201 - Intermediate Programming\n";
print "301 - Advanced Programming\n";
print "401 - Professional Programming\n\n";

# Ask user to pick a course
print "Please select the course you would like to enroll in: ";
my $course = <>;

# Check if course number is valid
if ($course == 101 || $course == 201 || $course == 301 || $course == 401) {
  print "\nYou have successfully enrolled in course $course.\n";
  print "We look forward to seeing you in class!\n\n";
}
else {
  print "\nSorry, that is an invalid course number.\n";
  print "Please try again.\n\n"
}

# Ask user if they would like to sign up for another course
print "Would you like to sign up for another course? (yes/no) ";
my $response = <>;

# Take user back to course selection
if ($response eq "yes\n") {
  print "\nPlease select the course you would like to enroll in: ";
  $course = <>;
  
  if ($course == 101 || $course == 201 || $course == 301 || $course == 401) {
    print "\nYou have successfully enrolled in course $course.\n";
    print "We look forward to seeing you in class!\n\n";
  }
  else {
    print "\nSorry, that is an invalid course number.\n";
    print "Please try again.\n\n"
  }
}
# End program thank you  
else {
  print "\nThank you for choosing The Learning Lounge!\n";
  print "We hope to see you in class soon.\n\n"
}