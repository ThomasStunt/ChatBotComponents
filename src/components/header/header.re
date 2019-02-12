let component = ReasonReact.statelessComponent("Header");
let make = _children => {
  ...component,
  render: _self => {
    <nav className="navbar navbar-expand-lg navbar-light bg-light">
      <a className="navbar-brand" href="/"> {ReasonReact.string("Tennis")} </a>
      <ul className="navbar-nav mr-auto">
        <li className="nav-item active">
          <a className="nav-link" href="/login"> {ReasonReact.string("Login")} </a>
        </li>
        <li className="nav-item active">
          <a className="nav-link" href="/register"> {ReasonReact.string("Register")} </a>
        </li>
      </ul>
    </nav>;
  },
};
