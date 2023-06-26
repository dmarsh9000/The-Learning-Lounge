-- The Learning Lounge

-- Lua Library
--
-- This Lua library contains functions to help new users learn the language.
--

-- Prints a message to the console
function printMessage(message)
  print(message)
end

-- Adds two numbers
function addNumbers(num1, num2)
  return num1 + num2
end

-- Subtracts two numbers
function subtractNumbers(num1, num2)
  return num1 - num2
end

-- Multiplies two numbers
function multiplyNumbers(num1, num2)
  return num1 * num2
end

-- Divides two numbers
function divideNumbers(num1, num2)
  return num1 / num2
end

-- Raises one number to the power of another
function powerNumbers(base, exponent)
  return base^exponent
end

-- Returns the square root of a number
function squareRoot(num)
  return math.sqrt(num)
end

-- Rounds a number to the nearest whole number
function roundNumber(num)
  return math.floor(num + 0.5)
end

-- Raises e to the power of the given number
function eToThePower(num)
  return math.exp(num)
end

-- Returns the logarithm of a number
function logarithm(num)
  return math.log(num)
end

-- Converts a number from degrees to radians
function degreesToRadians(degrees)
  return degrees * math.pi / 180
end

-- Converts a number from radians to degrees
function radiansToDegrees(radians)
  return radians * 180 / math.pi
end

-- Returns the maximum value from a given list
function getMax(list)
  local max = list[1]
  for i=2,#list do
    if list[i] > max then
      max = list[i]
    end
  end
  return max
end

-- Returns the minimum value from a given list
function getMin(list)
  local min = list[1]
  for i=2,#list do
    if list[i] < min then
      min = list[i]
    end
  end
  return min
end

-- Returns the average of a given list
function getAverage(list)
  local sum = 0
  for i=1,#list do
    sum = sum + list[i]
  end
  return sum/#list
end

-- Returns a list of odd numbers
function getOdds(list)
  local odds = {}
  for i=1,#list do
    if list[i] % 2 == 1 then
      table.insert(odds, list[i])
    end
  end
  return odds
end

-- Returns a list of even numbers
function getEvens(list)
  local evens = {}
  for i=1,#list do
    if list[i] % 2 == 0 then
      table.insert(evens, list[i])
    end
  end
  return evens
end

-- Returns the absolute value of a number
function getAbsoluteValue(num)
  return math.abs(num)
end

-- Returns the factorial of a number
function factorial(num)
  local factorial = num
  for i=num-1,1,-1 do
    factorial = factorial * i
  end
  return factorial
end

-- Parses a string or number and returns its type
function getType(value)
  return type(value)
end

-- Returns the length of the given string
function getLength(string)
  return string.len(string)
end

-- Returns the ASCII value of a character
function getAsciiValue(char)
  return string.byte(char)
end

-- Returns the character of a given ASCII value
function getChar(num)
  return string.char(num)
end

-- Returns true if the given value is a palindrome
function isPalindrome(value)
  -- Convert numbers to strings
  if type(value) == "number" then
    value = tostring(value)
  end
  -- Get the reversed version of the value
  reversed = string.reverse(value)
  -- Compare the reversed version to the original
  if reversed == value then
    return true
  else
    return false
  end
end

-- Returns true if the given value is a prime number
function isPrime(num)
  -- Check if the number is even
  if num % 2 == 0 then
    return false
  end
  -- Loop through possible factors
  for i=3,math.sqrt(num),2 do
    if num % i == 0 then
      return false
    end
  end
  return true
end