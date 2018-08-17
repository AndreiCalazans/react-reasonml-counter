let styled = ReactDOMRe.Style.make;

let styleds = ReactDOMRe.Style.combine;

let centerStyle = styled(
  ~display="flex",
  ~justifyContent="center",
  ~alignItems="center",
  ());

let containerSpace = styled(
  ~margin="10px",
  ~padding="10px",
  ());

let row = styled(
  ~flexDirection="row",
  ());

let column = styled(
  ~flexDirection="column",
  ());