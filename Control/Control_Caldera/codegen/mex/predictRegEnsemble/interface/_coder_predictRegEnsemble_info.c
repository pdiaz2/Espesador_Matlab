/*
 * _coder_predictRegEnsemble_info.c
 *
 * Code generation for function '_coder_predictRegEnsemble_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRegEnsemble.h"
#include "_coder_predictRegEnsemble_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("predictRegEnsemble"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.2.0.538062 (R2017a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[29] = {
    "789ced5d4d6c2b57159e96b6f42d0a03524bab027dafaaaad256b193f8254e8544fc33499cc489633b79491e953d1e8fed799e3fcf8c1d3bab4848a83bca9e6e"
    "a8102036ec5a76d9c19205a00ab140ac6083ba292b84187b3c89e7d6f7795e7c7d9db1cf95f2263767e67c77ce3bf79c73cffd19e6a954fa298661be66ff74af",
    "172f75ff65981718a7b0fdebd38cb7a0f4a7fad705a4ee966799673ccfb9f49ff5af82a65a62db722ab2a48a7b4da5241a7645e515f18a4d5953249557ad7c47"
    "1719433435b925967b948a248b79491177b581ca966457948d01d255a54beafe9ea889423dd75418a3665e37571eac3003f2f90cf3fecff8948f89d419e43e97",
    "fe907b3ff15ee8d0140d33a4f325590b2535a1a988aa6586d2b1fc6e2c1e4af355c9b4442394e9d137252bc499ba68f265cd28a4794be64ba1842d564393dd6b"
    "21c1cb65d1e043ba219625c1ca8a554e3545a5248b0b8ae73d8b98f778cee77ba257b7dc619e1fa8bdb13e0acfaf5c9f43eaccd57d0ec5107585b746bf1f293c",
    "d3329ac200de6fc7c4dbc6e279e90f53bbc73dd5c9185ad5e095bb5d1dbf5299ec527871950f599a2697b4764854e4902c95428aa32ca26cff127224d557078a"
    "fa70f1d30ffffbe7185dfda3adefd3c36b63f8f9d5bf1731782c42df1292cb55a37d14d1b716ab8bf193bcb154ad0cb423330267543b184c9d167fe8c7c3dbef",
    "d5bbb7d649e9ddcb183c16a10b9aedd716243b8830545e5e5079a32aa942ad3eaebd470bae1d6e71f12e6f88e7f2ffe1083c97fe447a62d678dbef877ab2eaff"
    "fb4effe24a2e742539477328daff9fac64ff04f67f4278e3f6c39730782c42efb4cf526bfc46a57a3f2cec735aeed14673f58c9b1dfb7f89793ea8fd1aa7177e",
    "f5f02b98f7b9d3bfbeecf9ebebebcef5cdfef55d62f1ffb39876b07d4a45d6b4ee689256fc5fd69af6a08a5cdc90c2e279e9e3c50d95a61aea49ca0d1b68daab"
    "dfedbd09f17fd0ed7fb4b1ba9f6fc8c9fbf5782d7fb099b31ac9a4b0313bf61ffaf1f0f67bf5eeee955dbfc0f0f32bafd730782c4247e27fc98c3725d94aa97b",
    "4d453424616a76ffd331f18eb1785efa13eb4bf7e74b41022ab6058562fcffc9177f05fb1f74fbbfdf6a246295ad56347f10e9089ca22e6d9cca5b60ffe7cbfe"
    "bf41ccfebf8ac163113a62ff4d81977963c18dfac78ffbd1e2370f34aefd3f1c81e7d2c9d8ff771cb90de80e45fbfff3cc2b60ff836eff4bb595ccb12a5be59c",
    "a6704d756bb9c4c5b737c1fecfabfdff10c3cfafbcbe87c163113a62ff795d973bb99e31db68aa8225696a4acdc8bce02e2570dba78fd9beaf8f689f4baff45b"
    "51a8f16ad91e20b8f87f1813bf3402dfa593f10f78b14e619ee98b7fc37821f0fe62eb2c99c8b6a3e7cb1abf256e6f585161bf129f217f01fd7bf87bf9d3c785",
    "991b474c2b8f04e38849e139655ef0601c4186ffb8e388f95847b47465ff3fc0f0f32baf7b183c16a1a3e308d3140deb8897a5724e3a176346b57fdfb4fcc0e5"
    "9878a7583c2f9d503cf125f14d615d29cc2b4c108f963fc8e84b918da3e49eb46a1e3cda15b4547d67793b393bfee012f33cf46b6ff1e8e1c53acc333364c607",
    "30cf3c293ca7cc0b1ecc3393e13f6ede4844ea0c729f4b9f9c3fb827995dbacd546628ebe3fa09b575a5dd971cdcdf322ede6cae2bed8e237b929ac27cd4c5a7"
    "60ef836fefefb7d3f246bd557e945a396e6f978da5889a5b8175a573d48fbb85dcba2288f771785e3ac4fb4f8ae79479c183789f0cff1989f74b5a532d9b0ced",
    "78ff80985ff80e068f45e85ff20ba9ee58473412b22d1b86dc78e019a47edd1e8722d4f8dec43429bf7084c5f3d249f98541b175830a98279e0d3c5a7e4189c9"
    "c94aecb86472474be19515735978a09933342f007e61f87bf9f30b87d4ce17b245a0f0ede9d9fd71c78ff4d61338929ac27cd12fc1de07dfdecbed955331fc68",
    "3f7c28c5c3f9b3f3453e2267601c00f6be5b2ee8da7b49057befcfde4b2ad8fbd9c2a396f74fa5eb7a7d4f6c5b5be95c35b3b993d90ccb71b0f760efedb27e44"
    "2ceff36d0c1e8bd0d1bc8f5a16db29d5ca8ab2a677e9d3da677c79433c977f11a9a3782e9df8b9541e09529d17f817a7827f08ba7fd8dddd48acc6d2c6766557",
    "31954cad163b5e3c9f21fff04fccf37ee5f8230c7f16a14fba5fdfabc81a6f15846e9eb7d03dec9b9754b3e0dee466cd29ebebdf4562fee3150c1e8bd011ffd1"
    "934adafe9bdca70775de208bc5f3d2c9c421d7629bc27e02983798201e2dbfd18a2e4756c5ed9dfd4a72cd3a5de5b3bb094999a13cd2b8df2968237506b9cfa5",
    "4fdc6f4866c194aaaa58f63a0baafa7929405ec9271ee49588e3f5cabce0415e890cff4bccf3b09fcc5bbc7ab80976de271ed879e278bd322f7860e7c9f0bfc4"
    "3c1f543baf63daeb570f9f46ea6e71bf47e0c99f5f6cae3bd734ac13f28907eb8488e3f5cabce0c13a2132fc2f31cf07d5ee1731ed25bb3ee8dace5f60f8c17c",
    "f1e3f15cfe45a48ee2b974982fbe299e53e6050fe68bc9f00f4e7c37cd73e5a2c4e27ddcf7cfd83ea517ec33e4f4fc5b583c2f1de37702b5dfbccc5b7cf724f3"
    "8161004d3df9fc8e00f63ee8f69e6b46f68cca5a4655125c5e58eb2496db8fd260efe7a91fdbe5fa7b64f03de227c373f9dfb6ef961631ed2518efc3f7882788",
    "07df2326c31fecfff0f67bf5ee6d62f6ff86f1b722a9fb46da1e0b0435ef9f41ea0c729f4b27932f74c54535bff3fbb79efb0bd8fb09e1d1b2f7f9cc8388bea4"
    "6e2b9b5c6ccf3c8b66b764f17486ce83807e3cbcfd5ebd7b17e2fd1be241bc3f1ff698361ec4fb64f85f629ef72bc7f731fc59844edafedfb3e905b16d19a2d2",
    "5418da7ab806fee08678e00fe6c33ed3c6037f4086ffb8e747f018fe2c429f883f2849eaa04f187caf22a6dd44f5b1a84e3b2fe47c2791abcedcfc30dd71a62b"
    "46aaf9a28f3efa1bcc0f07dd3f84f7ce5695bca49cee48d932b7931472954a07e687e7a81f339e75a13a869f5f79bd80d419e43e972e99aa7314bed5d1bb6734",
    "cd9afddf1fd10e977ea379a58ad416cbba66b73ee491a33d44a0a837bf807d02c1b7ff9bcbf54eae5195e4443e51cf36e2d57cfd9083f982b9b5ff383cbff27a"
    "1ea93357f73914c9ac480a6fd566cdde4f74ddb0c7de3bf29bc2ba61b0f713c41bb71fbc88c163117aab21727a4b30d78ecf96352d63e616974f4e99d9b1f7c1",
    "fa2ed4b5bdbf57910cd3aa4854f5efb2486c3fd87731782c42efa6bdecd72f543443d634bda0b544a3226b6705a1260a75d80ff6d87d238e1a3d467e54f33fd1"
    "7f3c0beb856eab3ff01bff9b3b5c9b4b9e9f67b6db4b91f4523871105b0ccfd0fcc0b8e787fe18c39f45e893eed7f71e7f43a126caba6804f7bca051eb39bb71",
    "6ff77adbc60dbf1ab31d1b23dae1d2498c1be87e5f8c81ef0e4f108f967fc8757449b9dfc83e58944ae548eaf420935e6ccd507e08faafb778f52d7c6be6058a"
    "63e2d3de2f00f97fe278bd322f7890ff27c31fe27f6f7bc9ea6b8a58fc0fe7c63905ce8df38dd72bf38207e7c691e10ffec0db5eb2f3c874fd019c1f0de747df",
    "16fb4c1b0fce8f26c31fe68b875fdde2fd5e5891987d877cfff07604385f08f9fe09e241be9f0c7fd82f36fcbd7ce9e3c07eb10b0c3fbf727c1583c722f421fb"
    "c5c4b61e93654de8d16f9b7f18379ec88f68874b27174fb8e2a4bebff813f017c1f717a9522cb5b8a2d75bdc51e341b81e0f470ea46d181fcc617fee96ebf9e2",
    "0f30fcfccaed750c1e8bd01fe31ff6b484b3a6b45b6e9b9fb81cb31d0f47b4c3a593d7abbe58fb0925f017b38147cb5f584b3b9de346f5f8a856adaf6637adfa"
    "76a6cdcdd0fcc2b8e38b1a863f8bd02732be70d24b9e6106ddfc5203cea380f32886b6df877f80f328268807e75190e10ffe61f87bf9d2c73f1ac4f24faf61f0",
    "58848eda6533de94642ba5ee39ab2e6f9d9f08d67c162a4eaafe02c61313c4a3e52ff65b8d44acb2d58ae60f221d8153d4a58d537986c613e3c67df3f13db3ef"
    "c33e66864c5ea988d4513c970efb986f8ae79479c1837dcc64f8831f18de7eeffad338313f00df377e3c9e4b87ef1bdf14cf29f38207df3726c3ff33ccf37ee5",
    "6862f8b308fd61af531f9aa2618674be246ba1a426d88374d5baeadc69be2a9976af0d657af44dc90a71a62e9a7c59330a69c7252434d53234d9bd1612bc6c77"
    "773ea4db764012ec4e5ee55453544ab2487d3eb15baebf93a363f8f9952beeff9145aeb2c697139aa2f38295b62d9f4c6a3ded57b1f80e4569c70c83ef108b27",
    "d2583c2ffd61ea09dc83c5dbda25c8bc691a6235848aaaa72114f523f3bfff803f08ba3fe8ec37d3fad9a66875cee3e9bc11adc41f6caf24c01f803f708a573f"
    "ef13dbdf30ea1c54c5284b2da92cd2da2f57d69ab65083359ed47433e4ca69a1efa029eac337b8bb339d17faf534f7e7d13aefb47d727aca556392d188b414ee",
    "7efe2476f0886766c7fe433f1ede7eafde7dfe035a7176ff3589ed4ba66dd7697c0fbbab0fae3af4d38434d791fee6d50388eb836ed7a3670795c3e3c8caea56"
    "4bceae25a3d15ded5060c0aedf967e8ccba7f8d5bba731edbf83dcef94d7d79deb9bb7767d5071ccf63ca91f807540c3af6e81754074f0601d1019fe41f70745",
    "4cfbc8eadddbc4ecff5d0c1e8bd087ef3feba5ad2dc9b6c8d3b2ff9763e29d60f1bc74a2fbcbaec5360dfdf918ce2b0abe1f28b54ff6b215be7e7490ded9dbce"
    "8a562e9cdb073f30677ee03d62fbc8be89c163113ae207ecb777fe1ed43cd00e16cf4b2763ff6d71d1df4ffc31e481826fefd38756f824f520a6aa875929631e",
    "ec55cd7c6306d67dfe1fc4131be0", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 71320U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_predictRegEnsemble_info.c) */
