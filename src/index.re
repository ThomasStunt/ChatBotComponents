module Index = {
  let component = ReasonReact.statelessComponent("Index");
  let make = _children => {...component, render: _self => { <div><Header /> <Input /></div>}};
};

ReactDOMRe.renderToElementWithId(<Index />, "main");
