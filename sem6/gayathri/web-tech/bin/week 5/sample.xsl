<?xml version="1.0" encoding="ISO-8859-1"?>
<xsl:transform version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<body>
<h2>College info</h2>
<table border="1">
<tr bgcolor="#9acd32">
<th>NAME</th>
<th>ID/Roll number</th>
<th>DEPT</th>
</tr>
<xsl:for-each select="college/teach/teaching">
<tr>
    <td><xsl:value-of select="name"/></td>
    <td><xsl:value-of select="id"/></td>
    <td><xsl:value-of select="dept"/></td>


</tr>
</xsl:for-each>

<xsl:for-each select="college/non-teach/nonteaching">
<tr>
    <td><xsl:value-of select="name"/></td>
    <td><xsl:value-of select="id"/></td>
    <td><xsl:value-of select="dept"/></td>


</tr>
    </xsl:for-each>

<xsl:for-each select="college/student/students">
<tr>
    <td><xsl:value-of select="name"/></td>
    <td><xsl:value-of select="roll"/></td>
    <td><xsl:value-of select="dept"/></td>


</tr>
    </xsl:for-each>

</table>

</body>
</html>
</xsl:template>
</xsl:transform>
