[%bs.raw {|require('./index.css')|}];

[@bs.module "./registerServiceWorker"]
external register_service_worker : unit => unit = "default";

ReactDOMRe.renderToElementWithId(
  <App message="Welcome to React and Reason by Andrei" />,
  "root",
);

register_service_worker();
