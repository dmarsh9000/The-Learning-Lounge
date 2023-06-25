Public Class LearningLounge
    'This class provides a learning environment for students to explore and gain knowledge
    Private Shared m_studentCount as Integer 'This is used to keep a count of the students in the lounge
    Private Shared m_isOpen As Boolean 'This is used to tell if the lounge is open/closed
    
    'This is the class constructor
    Public Sub New()
        m_studentCount = 0
        m_isOpen = False
    End Sub
    
    'This method is used to open the lounge
    Public Sub OpenLounge()
        If Not m_isOpen Then
            m_isOpen = True
            Console.WriteLine("The Learning Lounge is now open!")
        End If
    End Sub
    
    'This method is used to close the lounge
    Public Sub CloseLounge()
        If m_isOpen Then
            m_isOpen = False
            Console.WriteLine("The Learning Lounge is now closed!")
        End If
    End Sub
    
    'This method is used to add a student to the lounge
    Public Sub AddStudent(ByVal studentName As String)
        If m_isOpen Then
            m_studentCount += 1
            Console.WriteLine("{0} has joined the Learning Lounge!", studentName)
        Else
            Console.WriteLine("The Learning Lounge is closed! Please come back later.")
        End If
    End Sub
    
    'This method is used to remove a student from the lounge
    Public Sub RemoveStudent(ByVal studentName As String)
        If m_studentCount > 0 Then
            m_studentCount -= 1
            Console.WriteLine("{0} has left the Learning Lounge!", studentName)
        Else
            Console.WriteLine("There are no students in the Learning Lounge!")
        End If
    End Sub
    
    'This method is used to get the number of students in the lounge
    Public Function GetStudentCount() As Integer
        Return m_studentCount
    End Function
End Class