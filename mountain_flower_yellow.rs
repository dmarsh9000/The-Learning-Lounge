//1:
fn greet_customer() {
    println!("Hello, welcome to The Learning Lounge!");
}

//2:
fn ask_question() {
    println!("Do you have any questions about Rust programming? I'm here to help!");
}

//3:
struct User {
    name: String,
    email: String,
    active: bool,
}

//4:
impl User {
    fn new(name: String, email: String) -> Self {
        Self {
            name,
            email,
            active: true,
        }
    }
}

//5:
fn create_user() {
    let new_user = User::new(String::from("John Doe"), String::from("john.doe@example.com"));
    println!("New user created: {:?}", new_user);
}

//6:
fn answer_question(question: &str) {
    println!("{}, let me look that up for you...", question);
}

//7:
fn explain_concept() {
    println!("Rust is a modern programming language focused on safety, speed, and concurrency.");
}

//8:
fn provide_example() {
    let example_code = r#"
fn main() {
    println!("Hello, world!");
}
"#;

    println!("Here's an example of Rust code:\n{}", example_code);
}

//9:
fn recommend_resources() {
    println!("I recommend the official Rust website for tutorials and the Rust-lang book for a deeper dive!");
}

//10:
fn sign_off() {
    println!("Thanks for visiting The Learning Lounge, I hope I could help!");
}

//11:
fn main() {
    greet_customer();
    ask_question();
    create_user();
    answer_question("What is Rust?");
    explain_concept();
    provide_example();
    recommend_resources();
    sign_off();
}

//12:
struct Point {
    x: i32,
    y: i32,
}

//13:
impl Point {
    fn new(x: i32, y: i32) -> Self {
        Self { x, y }
    }
}

//14:
fn calculate_distance(p1: &Point, p2: &Point) -> f64 {
    let x_diff = (p1.x - p2.x).pow(2) as f64;
    let y_diff = (p1.y - p2.y).pow(2) as f64;
    (x_diff + y_diff).sqrt()
}

//15:
struct Rectangle {
    top_left: Point,
    bottom_right: Point,
}

//16:
impl Rectangle {
    fn new(top_left: Point, bottom_right: Point) -> Self {
        Self {
            top_left,
            bottom_right,
        }
    }
}

//17:
fn calculate_diagonal(rect: &Rectangle) -> f64 {
    let p1 = &rect.top_left;
    let p2 = &rect.bottom_right;
    calculate_distance(p1, p2)
}

//18:
struct Square {
    top_left: Point,
    side_length: i32,
}

//19:
impl Square {
    fn new(top_left: Point, side_length: i32) -> Self {
        Self {
            top_left,
            side_length,
        }
    }
}

//20:
fn calculate_square_diagonal(square: &Square) -> f64 {
    let p1 = &square.top_left;
    let p2 = &Point::new(square.top_left.x + square.side_length, square.top_left.y + square.side_length);
    calculate_distance(p1, p2)
}

//21:
fn explain_geometry() {
    println!("Geometry can help us measure distance between points and calculate the length of the sides of a rectangle or square.");
}

//22:
fn provide_geometry_example() {
    let p1 = Point::new(0, 0);
    let p2 = Point::new(3, 4);
    let rect = Rectangle::new(p1, p2);
    let square = Square::new(p1, 3);
    println!("For example, the distance between the points {:?} and {:?} is {}", p1, p2, calculate_distance(&p1, &p2));
    println!("The diagonal of the rectangle {:?} is {}", rect, calculate_diagonal(&rect));
    println!("The diagonal of the square {:?} is {}", square, calculate_square_diagonal(&square));
}

//23:
fn main_geometry() {
    explain_geometry();
    provide_geometry_example();
}

//24:
struct UserPreferences {
    user_id: i32,
    topics: Vec<String>,
}

//25:
impl UserPreferences {
    fn new(user_id: i32, topics: Vec<String>) -> Self {
        Self {
            user_id,
            topics,
        }
    }
}

//26:
fn recommend_topics(user_preferences: &UserPreferences) {
    println!("Based on your interests, these topics may be of interest to you:");
    for topic in &user_preferences.topics {
        println!("- {}", topic);
    }
}

//27:
fn main_preferences() {
    let user_preferences = UserPreferences::new(
        1,
        vec!["Rust", "TypeScript", "Python", "C++"]
    );

    recommend_topics(&user_preferences);
}

//28:
struct Course {
    name: String,
    description: String,
    topics: Vec<String>,
}

//29:
impl Course {
    fn new(name: String, description: String, topics: Vec<String>) -> Self {
        Self {
            name,
            description,
            topics,
        }
    }
}

//30:
fn recommend_courses(user_preferences: &UserPreferences) {
    println!("Here are some courses that may interest you:");
    let rust_course = Course::new(
        String::from("Intro to Rust Programming"),
        String::from(
            "Learn about the fundamentals of Rust programming language, such as ownership, memory safety, type inference, and more."
        ),
        vec!["Ownership", "Memory Safety", "Type Inference"],
    );
    println!("{} - {}", rust_course.name, rust_course.description);

    let topics_intersection: Vec<String> = user_preferences
        .topics
        .iter()
        .filter(|topic| rust_course.topics.contains(topic))
        .map(|s| s.to_string())
        .collect();
    println!("Your topics of interests overlap with this course topics: {:?}", topics_intersection);
}

//31:
fn main_courses() {
    let user_preferences = UserPreferences::new(
        1,
        vec!["Rust", "TypeScript", "Python", "C++"]
    );

    recommend_courses(&user_preferences);
}

//32:
struct CommunityEvent {
    name: String,
    description: String,
    date: String,
    location: String, 
}

//33:
impl CommunityEvent {
    fn new(name: String, description: String, date: String, location: String) -> Self {
        Self {
            name,
            description,
            date,
            location
        }
    }
}

//34:
fn announce_event() {
    let event = CommunityEvent::new(
        String::from("Rust Meetup"),
        String::from("Join us in discussing Rust programming language topics."),
        String::from("January 10, 2021"),
        String::from("Online"),
    );
    println!("Announcing a new event: {} - {} on {} at {}", event.name, event.description, event.date, event.location);
}

//35:
fn main_events() {
    announce_event();
}

//36:
fn main() {
    main_geometry();
    main_preferences();
    main_courses();
    main_events();
}