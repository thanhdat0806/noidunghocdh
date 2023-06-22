import React, {Fragment} from 'react'
import './App.css';
import Header from './component/Header'
import Aside from './component/Aside'
import Content1 from './component/Content1'
import Content2 from './component/Content2'
import Footer from './component/Footer'
function App() {
  return (
    <Fragment>
      <Header />
      <Aside />
      <Content1 />
      <Content2 />
      <Footer />
    </Fragment>
  );
}

export default App;
