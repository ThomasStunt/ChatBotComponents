module InputStyle = {
  open Css;

  let sendButton = style([color(white), backgroundColor(darkgray)]);
};

let component = ReasonReact.statelessComponent("Input");
let make = _children => {
  ...component,
  render: _self => {
    <div className="container">
      <div>
        <div className="input-group mb-3 p-3">
          <input type_="text" className="form-control" placeholder="Inserez votre message ici ..." />
          <div className="input-group-append">
            <button className=InputStyle.sendButton> {ReasonReact.string("Test")} </button>
          </div>
        </div>
      </div>
    </div>;
  },
};
