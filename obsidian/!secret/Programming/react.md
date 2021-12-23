React
<https://www.freecodecamp.org/news/learn-react-basics/>

React is an open-source JavaScript library that helps you build user interfaces. It's a component-based, declarative, "learn once and write anywhere" tool.

- modern JavaScript knowledge make you an efficient React developer
- React Only Updates What’s Necessary
- Even though we create an element describing the whole UI tree on every tick, only the text node whose contents have changed gets updated by React DOM.

# Modern JavaScript Concepts You'll Need to Know for React

- ES6 works well with react
- local and global variables
  - var  = global scope (use less since conflicting variable is common)
  - let = local or function scope + can redeclare varibles
  - const = local or function scope + constnat variables

| scope                          | VAR                | LET            | CONST          |
| ------------------------------ | ------------------ | -------------- | -------------- |
| Reassigning a new value        | function or global | block          | block          |
| When accessed before declaring | undefined          | ReferenceError | ReferenceError |
***

- Don't use var anymore. Use let or const.
- Use const more often. Use let when you need to reassign another value to a variable.
- Template Literals in JavaScript `${this.username}@gmail.com`
- import export in JS
- Arrow functions
- destructuring
- spread params
- OOP concepts (classes, inherithance, mutation, polymorphism)


# Visualize a React App as a Bunch of Components
Components

Components are the building blocks of any React app and a typical React app will have many of these. Simply put, a component is a JavaScript class or function that optionally accepts inputs i.e. properties(props) and returns a React element that describes how a section of the UI (User Interface) should appear.

# Props vs State in React

$Props$: are the variables passed by a parent component to its children. Using the props component, we can pass the required data to its children down in the hierarchy.
Props are arguments passed into React components. Props are passed to components via HTML attributes.

$State$: On the other side, state is the variable that a component manages within itself. In many cases, a component's state variable can be initialized by the data passed to it using props.

Note: Always start component names with a capital letter. React treats components starting with lowercase letters as DOM tags. For example, <div /> represents an HTML div tag, but <Welcome /> represents a component and requires Welcome to be in scope.

/\*\*

\* Other modern/advanced React features/topics to learn:

\*

\* Official React Context API - https://reactjs.org/docs/context.html

\* Error Boundaries - https://reactjs.org/docs/error-boundaries.html

\* render props - https://reactjs.org/docs/render-props.html

\* Higher Order Components - https://reactjs.org/docs/higher-order-components.html

\* React Router - https://reacttraining.com/react-router/core/guides/philosophy

\* React Hooks - https://reactjs.org/docs/hooks-intro.html

\* React lazy, memo, and Suspense - https://reactjs.org/blog/2018/10/23/react-v-16-6.html

\*/
https://medium.freecodecamp.org/every-time-you-build-a-to-do-list-app-a-puppy-dies-505b54637a5d

https://medium.freecodecamp.org/want-to-build-something-fun-heres-a-list-of-sample-web-app-ideas-b991bce0ed9a

https://medium.freecodecamp.org/summer-is-over-you-should-be-coding-heres-yet-another-list-of-exciting-ideas-to-build-a95d7704d36d

conditional styling in react:
style={ someCondition ? { textAlign:'center', paddingTop: '50%'} : {}}
