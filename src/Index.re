
module App = {
    let component = ReasonReact.statelessComponent("App");
    let make = _children => {...component, render: _self => <h1>ReasonReact.string("ChatbotComponents")</h1>};
};
  
 ReactDOMRe.renderToElementWithId(<App />, "main");
  
