module InputStyle = {
  open Css;

  let sendButton = style([color(white), backgroundColor(darkgray)]);

  let inputGroup =
    style([
      position(`relative),
      display(`table),
      borderCollapse(`separate),
      alignItems(`stretch),
      flexWrap(`wrap),
      alignItems(`stretch),
      width(`auto),
      marginBottom(rem(1.0)),
      padding(rem(1.0)),
    ]);

  let formControl =
    style([
      borderTopRightRadius(rem(0.0)),
      borderBottomRightRadius(rem(0.0)),
      display(`tableCell),
      position(`relative),
      width(`auto),
      zIndex(2),
      float(`left),
    ]);

  let inputAppend = style([marginLeft(px(-1)), display(`flex), position(`relative), zIndex(2)]);
};

let component = ReasonReact.statelessComponent("Input");
let make = _children => {
  ...component,
  render: _self => {
    <div className="container">
      <div>
        <div className=InputStyle.inputGroup>
          <input type_="text" className=InputStyle.formControl placeholder="Inserez votre message ici ..." />
          <div className=InputStyle.inputAppend>
            <button className=InputStyle.sendButton> {ReasonReact.string("Test")} </button>
          </div>
        </div>
      </div>
    </div>;
  },
};
