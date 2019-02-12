module Index = {
  let component = ReasonReact.statelessComponent("Index");
  let make = _children => {...component, render: _self => <h1> {ReasonReact.string("ChatbotComponents")} </h1>};
};

ReactDOMRe.renderToElementWithId(<Index />, "main");
