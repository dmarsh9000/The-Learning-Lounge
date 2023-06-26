// Dependencies
import * as React from "react";
import { Router, Route, Switch } from "react-router-dom";
import { Link, useLocation, useHistory, useParams } from "react-router-dom";

// The Learning Lounge component
const LearningLounge = () => {
  // Get the location and history objects
  const location = useLocation();
  const history = useHistory();

  // Render the Learning Lounge page
  return (
    <div>
      <h1>The Learning Lounge</h1>
      <h2>Pick your topic</h2>
      <ul>
        <li>
          <Link to="/html/">HTML</Link>
        </li>
        <li>
          <Link to="/css/">CSS</Link>
        </li>
        <li>
          <Link to="/javascript/">JavaScript</Link>
        </li>
        <li>
          <Link to="/react/">React</Link>
        </li>
      </ul>

      {/* Show the current path */}
      <p>You are currently at: {location.pathname}</p>

      {/* Go back one page */}
      <button onClick={() => history.goBack()}>Go Back</button>
    </div>
  );
};

// HTML topic component
const HTMLTopic = () => {
  // Get the params object
  const { topic } = useParams();

  // Render the HTML topic page
  return (
    <div>
      <h1>HTML Topic: {topic}</h1>
      <p>Here is some information about {topic}.</p>
    </div>
  );
};

// CSS topic component
const CSSTopic = () => {
  // Get the params object
  const { topic } = useParams();

  // Render the CSS topic page
  return (
    <div>
      <h1>CSS Topic: {topic}</h1>
      <p>Here is some information about {topic}.</p>
    </div>
  );
};

// JavaScript topic component
const JavaScriptTopic = () => {
  // Get the params object
  const { topic } = useParams();

  // Render the JavaScript topic page
  return (
    <div>
      <h1>JavaScript Topic: {topic}</h1>
      <p>Here is some information about {topic}.</p>
    </div>
  );
};

// React topic component
const ReactTopic = () => {
  // Get the params object
  const { topic } = useParams();

  // Render the React topic page
  return (
    <div>
      <h1>React Topic: {topic}</h1>
      <p>Here is some information about {topic}.</p>
    </div>
  );
};

// Component that renders the actual routes
const App = () => {
  // Render the routes
  return (
    <Router>
      <Switch>
        {/* Home page route */}
        <Route exact path="/">
          <LearningLounge />
        </Route>

        {/* HTML routes */}
        <Route exact path="/html/:topic">
          <HTMLTopic />
        </Route>

        {/* CSS routes */}
        <Route exact path="/css/:topic">
          <CSSTopic />
        </Route>

        {/* JavaScript routes */}
        <Route exact path="/javascript/:topic">
          <JavaScriptTopic />
        </Route>

        {/* React routes */}
        <Route exact path="/react/:topic">
          <ReactTopic />
        </Route>
      </Switch>
    </Router>
  );
};

// Export the App component
export default App;