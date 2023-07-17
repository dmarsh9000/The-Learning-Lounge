import scala.collection.mutable.ArrayBuffer

object TheLearningLounge {
  
  private var students = ArrayBuffer[Student]()
  
  def addStudent(s: Student): Unit = students += s
  
  def removeStudent(s: Student): Unit = students -= s
  
  def showStudents(): Unit = {
    println("\nShowing all Students:")
    for (s <- students) println(s)
  }
  
  case class Student(name: String, age: Int)
  
  def main(args: Array[String]): Unit = {
    val s1 = Student("John", 20)
    val s2 = Student("Vijay", 21)
    val s3 = Student("Meena", 18)
    
    addStudent(s1)
    addStudent(s2)
    addStudent(s3)
    
    showStudents()
    
    removeStudent(s2)
    
    showStudents()
  }
  
  // Helper methods
  def askForName(): String = {
    println("Enter student name:")
    scala.io.StdIn.readLine()
  }

  def askForAge(): Int = {
    println("Enter student age:")
    scala.io.StdIn.readInt()
  }
  
  def addStudent(): Unit = {
    val name = askForName()
    val age = askForAge()
    addStudent(Student(name, age))
  }
  
  def removeStudent(): Unit = {
    val name = askForName()
    val age = askForAge()
    removeStudent(Student(name, age))
  }
  
  def findStudent(): Student = {
    val name = askForName()
    val age = askForAge()
    students.find(s => s.name == name && s.age == age).get
  }
  
  def editStudent(): Unit = {
    val s = findStudent()
    val newName = askForName()
    val newAge = askForAge()
    removeStudent(s)
    addStudent(Student(newName, newAge))
  }
  
  def showMenu(): Unit = {
    println("\n----- The Learning Lounge -----")
    println("1. Add Student")
    println("2. Remove Student")
    println("3. Edit Student")
    println("4. Show Students")
    println("5. Exit")
  }
  
  def runMenu(): Unit = {
    showMenu()
    println("Enter your choice:")
    val opt = scala.io.StdIn.readInt()
    
    opt match {
      case 1 => addStudent()
      case 2 => removeStudent()
      case 3 => editStudent()
      case 4 => showStudents()
      case 5 => System.exit(1)
      case _ => println("Invalid Option")
    }
    runMenu()
  }
  
}