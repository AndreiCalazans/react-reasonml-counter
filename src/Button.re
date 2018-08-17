open Styles;

let component = ReasonReact.statelessComponent("Button");

let styles = (backgroundColor) => ReactDOMRe.Style.make(
  ~background=backgroundColor,
  ~width="70px",
  ~height="30px",
  ~borderRadius="5px",
  ~boxShadow="1px 1px 1px 1px rgba(0, 0, 0, 0.2)",
  ());


let make = (~label, ~onPress, ~backgroundColor, _children) => {
  ...component,
  render: self => 
    <button 
      style=(ReactDOMRe.Style.combine(styles(backgroundColor), centerStyle))
      onClick={onPress}
     >
      <p>(ReasonReact.string(label))</p>
    </button>
}