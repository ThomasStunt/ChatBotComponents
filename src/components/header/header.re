module HeaderStyle = {
  open Css;

  let header_chatbot =
    style([
      backgroundColor(`hex("333333")),
      color(white),
      position(`absolute),
      width(`percent(20.0)),
      height(`percent(15.0)),
      display(`flex),
      alignItems(`center),
      justifyContent(`spaceBetween),
      zIndex(1),
    ]);

  let header_chatbot_title = style([margin(`rem(1.0))]);

  let header_chatbot_exit =
    style([margin(`rem(1.0)), backgroundColor(`transparent), color(white), border(`zero, `none, white)]);
};

let component = ReasonReact.statelessComponent("Header");
let make = _children => {
  ...component,
  render: _self => {
    <div className=HeaderStyle.header_chatbot>
      <h2 className=HeaderStyle.header_chatbot_title> {ReasonReact.string("Chatbot")} </h2>
      <button className=HeaderStyle.header_chatbot_exit> {ReasonReact.string("X")} </button>
    </div>;
  },
};
