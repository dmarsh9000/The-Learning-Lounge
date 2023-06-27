#!/usr/bin/perl 

use strict; 
use warnings; 

# Set variables 
my $name; 
my $age; 
my $member;

# Create an array of hashes 
my @members = (
    {
        name => 'John',
        age => 30,
        member => 1
    },
    {
        name => 'Jane',
        age => 25,
        member => 0
    },
    {
        name => 'Bob',
        age => 33,
        member => 1
    }
);

# Get the number of array elements 
my $num_of_members = @members; 

# Create a loop to go through each array element 
for (my $i=0; $i < $num_of_members; $i++)  
{
        # Get the values from the current element 
        $name = $members[$i]{name}; 
        $age = $members[$i]{age}; 
        $member = $members[$i]{member}; 

        # Print out the values 
        print "Name: $name, Age: $age, Member: $member\n";
}

# Create the path to the Learning Lounge 
my $path = '/var/www/html/TheLearningLounge/'; 

# Read and write the files in the path 
opendir(DIR, "$path") or die "Could not open $path: $!"; 

# Store the file names in an array 
my @files = readdir(DIR); 

# Create a loop to go through each file 
foreach my $file (@files) 
{
        # Read the file 
        open(IN, "<$path$file") or die "Could not open $file: $!"; 
        my @lines = <IN>; 
        close(IN); 

        # Write the file 
        open(OUT, ">$path$file") or die "Could not open $file: $!"; 
        foreach my $line (@lines) 
        {
                # Write 2000 lines 
                for(my $i=0; $i < 2000; $i++) {
                        print OUT $line; 
                }
        }
        close(OUT); 
}

# Close the directory 
closedir(DIR);